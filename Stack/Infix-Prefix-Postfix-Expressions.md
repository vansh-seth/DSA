# Infix, Prefix, and Postfix Expressions in C

#### Infix Notation

The typical mathematical form where an operator is placed between two operands.

Example: `A * (B + C) / D`

#### Prefix Notation

Operators are placed before their operands. Also known as "Polish notation."

Example: `/ * A + B C D`

#### Postfix Notation

Operators are placed after their operands. Also known as "Reverse Polish notation."

Example: `A B C + * D /`

Infix | Prefix  | Postfix
----- | ------- | --------
A+B   |	+AB     |	AB+
A+B+c   |	-+ABC     |	AB+C-
(A+B)*C-D   |	-*+ABCD     |	AB+C*D-

### Conversion Algorithms

#### Convert Infix to Postfix

1. Create a stack.
2. For each character `c` in the input stream:
```C
If c is an operand
{
Output c 
}
Else if c is a right parentheses 
{
Pop and output tokens until a left parentheses is popped  
}
Else
{          // c is an operator or left parentheses
Pop and output tokens until one of the lower priorities than c 
are encountered, or a left parentheses is encountered, or the stack is empty.
Push c
}
   ```

Example: Infix expression - `A * B - (C + D) + E`

\```
Input Character | Operations on Stack | Stack       | Postfix Expression
--------------- | --------------------- | ----------- | -------------------
A               | -                     | Empty       | A
`*`             | Push                  | *           | A
B               | -                     | *           | A B
`-`             | Check and Push        | -           | A B * 
(               | Push                  | -(          | A B * 
C               | -                     | -(          | A B * C
`+`             | Check and Push        | -(+         | A B * C 
D               | -                     |             | A B * - C + D
)               | Pop and Append to Postfix till ‘(’ | - | A B * C D + 
`+`             | Check and Push     	  | +           | A B * C D + -
E               |                       | +           | A B * C D + - E
End             | Pop till Empty	      |             | A B * C D + - E +

\```

#### Convert Prefix to Postfix

1. Reverse the prefix string.
2. Create a stack.
3. For each character `c` in the input stream:
```C
If c is an operand 
{
Push it in the stack 
}
Else
{          // c is an operator
Pop two tokens(operand) from the stack. Concatenate the operands and the operator, as (operand 1 + operand 2 + operator). And push this string back in the stack 
            }

```

4. Repeat until the stack is empty or the input string ends.

Example: Prefix expression - `* + A B - C D`

Reversed String: `D C - B A + *`


Input Character | Operation on Stack  | Stack-1 (Postfix)
--------------- | ------------------- | -----------------
D               | Push                | D
C               | Push                | D C
`-`             | Concatenate and Push | (CD-)
B               | Push                | (CD-) B
A               | Push                | (CD-) B A
`+`             | Concatenate and Push | (CD-) (AB+)
`*`             | Concatenate and Push | (AB+) (CD-) *
End             | Final Output:        | AB+CD-*


Note: Parentheses are only used to represent the string after concatenation.

### similarly, you can convert infix to postfix and prefix.
