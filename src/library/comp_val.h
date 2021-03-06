/*
Copyright (c) 2016 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "kernel/expr.h"

namespace lean {
/** \brief If 'a' and 'b' are two distinct natural number values, then return a proof
    they are disequal. Otherwise return none.

    \remark This function assumes 'a' and 'b' have type nat.

    \remark A natural number value is any expression built using
    bit0, bit1, zero, one and nat.zero */
optional<expr> mk_nat_val_ne_proof(expr const & a, expr const & b);

/** \brief If 'a' and 'b' are two natural number values s.t. a < b,
    then return a proof for a < b. Otherwise return none.

    \remark This function assumes 'a' and 'b' have type nat.

    \remark A natural number value is any expression built using
    bit0, bit1, zero, one and nat.zero */
optional<expr> mk_nat_val_lt_proof(expr const & a, expr const & b);
/* Same for a <= b */
optional<expr> mk_nat_val_le_proof(expr const & a, expr const & b);

/* Similar to mk_nat_val_ne_proof, but for fin type */
optional<expr> mk_fin_val_ne_proof(expr const & a, expr const & b);

/* Similar to mk_char_val_ne_proof, but for char type */
optional<expr> mk_char_val_ne_proof(expr const & a, expr const & b);

/* Similar to mk_char_val_ne_proof, but for string type */
optional<expr> mk_string_val_ne_proof(expr a, expr b);

void initialize_comp_val();
void finalize_comp_val();
}
