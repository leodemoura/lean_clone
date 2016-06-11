import logic
open bool eq.ops tactic eq

constants a b c : bool
axiom H1 : a = b
axiom H2 : b = c

check have e1 : a = b, from H1,
      have e2 : a = c, from sorry, -- by apply trans; apply e1; apply H2,
      have e3 : c = a, from e2⁻¹,
      have e4 : b = a, from e1⁻¹,
      have e5 : b = c, from e4 ⬝ e2,
      have e6 : a = a, from H1 ⬝ H2 ⬝ H2⁻¹ ⬝ H1⁻¹ ⬝ H1 ⬝ H2 ⬝ H2⁻¹ ⬝ H1⁻¹,
      e3 ⬝ e2
