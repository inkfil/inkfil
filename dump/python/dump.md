# Python

### Symbolic computation with sympy

what is sympy?

	sympy is a Computer Algebra System (CAS)

``` python
import sympy as smp
smp.pi
smp.exp(x)
smp.symbol('x')
smp.00
smp.sqrt(x)

# expand (x+y)^2 = x^2 + y^2 + 2*x*y
((x+y)**2).expand()

# substitute x=1 and solve (x+y)^2 = (y+1)^2
((x+y)**2).subs(x,1)

# substitute x=y and solve (x+y)^2 = 4*y^2
((x+y)**2).subs(x,y)

```

```python
import sympy as smp
import sys
oldhook = sys.displayhook
sys.displayhook=pprint

# seperate the terms wrt x from this expression 1/(x+2)*(x+1) = -1/(x+2) + 1/(x+1)
smp.apart((1/(x+2)*(x+1)), x)

# merge the term in the following epression wrt x,  (1/x) + (1/y) + (1/z)
smp.together((1/x) + (1/y) + (1/z))

# to equate the terms of an expression, (x+2)==4
smp.eq(x+2, 4)

# to simplify an expression
smp.simplify((x+y)**2 - (x**2 + y**2 + 2*x*y))

# to declare an integer number
smp.Integer('x')

# to declare an rational number
smp.Rational('x')

a=(x+y)**2
b=(x**2 + y**2 + 2*x*y)
a.equals(b) # true
```

```python
from sympy.interactive import printing
printing.init_printing(use_latex = True)
from sympy import Eq, Solve_linear_system, Matrix
from numpy import linalg
import sympy as smp
import numpy as np

eq1 = smp.Function('eq1')
eq2 = smp.Function('eq2')
x, y = sp.symbols('x, y')
eq1=Eq(2x-y, 4)
eq2=Eq(3x-1, -2)
display(eq1)
display(eq2)
row1 = [2, -1, -4]
row2 = [3, -1, -2]
syst = Matrix((row1, row2))
display(syst)
Solve_linear_system(syst, x, y)
nmat = np.array([[2, -1], [3, -1]])
cons = np.array([-4, -2])
ans = Linalg.solve(nmat, cons)






```
