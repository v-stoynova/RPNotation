# RPNotation
Reverse Polish Notation is a method representing expressions in which the operator symbol is placed after the arguments being operated on.

*Idea:* My approach to solving the reverse polish notation involves using a stack as the main data structure. Given the assumption that the input expression is always valid, the algorithm proceeds through each element of the input expression. For operands, they are pushed onto the stack, and when an operator is met, two operands are popped from the stack, the operation is performed, and the result is pushed back onto the stack. To make it more reliable, if the stack contains less than two operands when an operator is encountered, an error can be handled. This process continues iteratively until the end of the expression is reached, resulting in the calculated value for the given reverse polish notation.

*Unit testing:* For the purpose of unit testing, I opted for UnitTest++, which seamlessly integrated with Code Blocks
