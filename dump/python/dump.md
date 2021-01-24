# Python

### Symbolic computation with sympy

```bash
python3 -m pip install sympy
```


what is sympy?

	sympy is a Computer Algebra System (CAS)

```python
#===================================================================
import sys
oldhook = sys.displayhook
sys.displayhook=pprint
from sympy.interactive import printing
printing.init_printing(use_latex = True)
from sympy import Eq, Solve_linear_system, Matrix
from numpy import linalg
import sympy as smp
import numpy as np
smp.pi
smp.exp(x)
smp.symbol('x')
smp.00
smp.sqrt(x)

#===================================================================
# to declare an integer number
smp.Integer('x')

# to declare an rational number
smp.Rational('x')
#===================================================================
# expand (x+y)^2 = x^2 + y^2 + 2*x*y
((x+y)**2).expand()

# substitute x=1 and solve (x+y)^2 = (y+1)^2
((x+y)**2).subs(x,1)

# substitute x=y and solve (x+y)^2 = 4*y^2
((x+y)**2).subs(x,y)
#===================================================================

# seperate the terms wrt x from this expression 1/(x+2)*(x+1) = -1/(x+2) + 1/(x+1)
smp.apart((1/(x+2)*(x+1)), x)

# merge the term in the following epression wrt x,  (1/x) + (1/y) + (1/z)
smp.together((1/x) + (1/y) + (1/z))

# to equate the terms of an expression, (x+2)==4
smp.eq(x+2, 4)

# to simplify an expression
smp.simplify((x+y)**2 - (x**2 + y**2 + 2*x*y))

# to equate 2 expressions
a=(x+y)**2
b=(x**2 + y**2 + 2*x*y)
a.equals(b) # true

#===================================================================
# substitutions
f = x**2 + 2*x -5
f.subs(x, 1.5)
f.subs(x, 2)

#===================================================================
# simplify ans: (1/x)(x+2)
f = (x**2 - x - 6)/(x**2 - 3*x)
smp.simplify(f) 

#===================================================================
# expand
f = (x+1)**3 * (x-2)**2
smp.expand(f) # (x)

#===================================================================
# factorise
f = (x**2 - x - 6)/(x**2 - 3*x)
smp.factor(f)

#===================================================================
# differentiate f wrt x
f = (x**2 - x - 6)/(x**2 - 3*x)
smp.diff(f, x)
f = smp.sin(x**2)*smp.exp(2*x)
# diff wrt x
z = smp.diff(f, x)
z.subs(x, 3.2)

# for function with multiple dependent variables 
# (i.e. for multi variate functions) we can specify 
# with which variable we want to diff

#===================================================================
# integrate following function wrt x where lower limit is 0 and upper limit is 5
f = x**2 * smp.sin(x**2)
g = smp.integrate(f, (x, 0.5))
g.evalf()

# for function with multiple dependent variables 
# (i.e. for multi variate functions) we can specify 
# with which variable we want to integrate

#===================================================================
# to find the roots of given expression
# x**2 + 5*x**2 = 3*x -10
y = smp.Eq(x**2 + 5*x**2, 3*x -10)
z = smp.solve(y, x) # this returns 3 roots
z[0].evalf()

#===================================================================
# solving system of linear equations
a=smp.Matrix([[1, 2, 5], [3, 4, 6], [-1, 0, 3]])
a.inv()
b=smp.Matrix([1, 2, 3])
a*b
a.inv()*b
a[1:2] # to get middle row
a[, 1:2] # to get middle column
m = smp.Zeros(2, 2) # to create a zero matrix of 2x2 dimentions

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

#===================================================================
```
