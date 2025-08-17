## Associativity and Precdence of Operators

### Problem
Write a program to solve the following expressions. <br>
<ol>
<li> 5 * 2 - 2 * 3 </li>
<li> 5 * 2 / 2 * 3 </li>
<li> 5 * (2 / 2) * 3 </li>
<li> 5 + 2 / 2 * 3 </li>
</ol>


### Input / Output
- **Input:** Provided expressions
- **Output:** Answer of the expressions

### Approach
- Operator Precedence: *, /, % --> +, - --> =
- Associativity Rule: For same precedence operators, present in an expression, solve the expression from Left to Right

### Pseudocode
1. Assign the expressions
2. Print the output value of the expression

### How to Run
- **Visual Studio Code** 
  ```bash
  >> gcc associativity.c
  
  >> ./a.exe
 