# Week 6: Binary Tree Theory

### Why do we use Pre-order Traversal?
Pre-order traversal (Root -> Left -> Right) is important in computer science for several key reasons:

1. **Compiler Logic:** As discussed in class, compilers use Abstract Syntax Trees (AST) to represent the structure of program code. Pre-order traversal allows the compiler to navigate the tree and understand the order of operations in an expression.
2. **Duplicating Trees:** If you want to make an exact copy of a tree, you must use pre-order because it creates the parent node before it tries to create the child nodes.
3. **Prefix Notation:** It is used to convert mathematical expression trees into prefix notation, where the operator is placed before its operands.
