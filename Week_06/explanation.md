# Week 6: Tree Theory - Pre-order Traversal

### Why do we use Pre-order Traversal?
Pre-order traversal follows the logic of **Root -> Left -> Right**. It is essential in data structures for several reasons:

1. **Compilers and Abstract Syntax Trees (AST):** As seen in the course materials, compilers represent code structures using ASTs. Pre-order traversal is used to explore these trees to understand the logic of an expression (like `a = b + c * 2`) before it is executed.

2. **Creating a Copy of a Tree:** If you want to create an exact duplicate of an existing tree, pre-order is the most efficient method because you create the "parent" node before trying to create its "children."

3. **Prefix Notation (Polish Notation):** Pre-order traversal of an expression tree results in prefix notation, which is often used in certain types of logic processing and compiler design.
