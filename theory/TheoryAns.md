# Theory of Computation Sprint Challenge

## Computation

Fill out truth tables for the following expressions:

1. `(A ∨ ¬B)`   (alternate: `(A || !B)`)
```
A     B     result
-------------------
0     0       true
0     1       false
1     0       true
1     1       true
```

2. `(¬A ∨ B) ∧ ¬(A ∧ ¬B)`   (alternate: `(!A || B) && !(A && !B)`)
```
A     B     result
-------------------
0     0       true
0     1       true
1     0       false
1     1       true
```

3. `¬(A ∨ B) ∨ ( (A ∨ C) ∧ ¬(B ∨ ¬C) )`   (alternate: `!(A || B) || ( (A || C) && !(B || !C) )`)
  * (Hint: Is it possible to calculate this using code?)

  "Yeah, but who needs code for a logic problem ;p" -Amber Meador
```
A     B     C     result
-------------------------
0     0     0       true
0     0     1       true
0     1     0       false
0     1     1       false
1     0     0       false
1     0     1       true
1     1     0       false
1     1     1       false
```


* Actually I did run over to repl.it, and code something up.  In Javascript!  ;p

<!-- 
let a =0;
let b =1;
let c =0;

if ( !(a || b) || ( (a || c) && !(b || !c) ) ) {
	console.log('true');
}
else {
	console.log('false');
}
-->


## STRETCH GOAL

The sum of two binary digits can be represented with the following truth table:

* A + B
```
A     B     CARRY   SUM
------------------------
0     0       0      0
0     1       0      1
1     0       0      1
1     1       1      0
```
This can be represented with boolean algebra like so:

* `SUM = A ⊕ B`  (alternate: `A ^ B` or `A xor B`)
* `CARRY = A ∧ B`  (alternate: `A && B`)


How can you represent the SUM and CARRY of adding THREE digits with a truth table and in boolean algebra?

* Let's give it the old Lambda try.  I'm assuming SUM = `A xor B xor C`, CARRY = `A && B && C` ... maybe...

* A + B + C
```
A     B     C      carry   sum
--------------------------------
0     0     0         0      0
0     0     1        0      1
0     1     0        0      1
0     1     1        0      0
1     0     0        0      1
1     0     1        0       0
1     1     0        0     0
1     1     1        1      1
```
* SUM = ?
* CARRY = ?
