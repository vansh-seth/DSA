# Tree Data Structure Overview

## Introduction

A tree data structure is a hierarchical arrangement of nodes connected by edges. Unlike linear data structures such as arrays or linked lists, trees offer efficient access to data due to their non-linear nature.

## Tree Terminology

- **Node**: An entity containing a value and pointers to child nodes. Leaf nodes have no children, while internal nodes have at least one child.
- **Edge**: Link connecting two nodes.
- **Root**: Topmost node of the tree.
- **Height of a Node**: Number of edges from the node to the deepest leaf.
- **Depth of a Node**: Number of edges from the root to the node.
- **Height of a Tree**: Height of the root node or depth of the deepest node.
- **Degree of a Node**: Total number of branches from that node.
- **Forest**: Collection of disjoint trees.

## Types of Trees

1. **Binary Tree**: Each node has at most two children.
2. **Binary Search Tree (BST)**: Binary tree with the property that for each node, all nodes in the left subtree have values less than the node's value, and all nodes in the right subtree have values greater than the node's value.
3. **AVL Tree**: Self-balancing binary search tree where the heights of the two child subtrees of any node differ by at most one.
4. **B-Tree**: Self-balancing tree structure, commonly used in databases and file systems, capable of storing large amounts of data.
  
## Tree Traversal

Traversal algorithms help in visiting nodes in a tree:

- **Inorder**: Left, Root, Right
- **Preorder**: Root, Left, Right
- **Postorder**: Left, Right, Root

## Tree Applications

- **Binary Search Trees (BSTs)**: Used for efficient searching and insertion operations.
- **Heap**: Tree structure used in heap sort algorithms.
- **Tries**: Modified tree structure used in routers for storing routing information.
- **B-Trees and T-Trees**: Variants of trees used in popular databases for efficient data storage.
- **Syntax Trees**: Used by compilers to validate the syntax of programs.

Trees find applications across various domains, offering efficient data organization and retrieval mechanisms. Understanding tree data structures is essential for efficient algorithm design and implementation.

## Tree Traversal - Inorder, Preorder, and Postorder

Traversing a tree involves visiting each node systematically. While linear data structures have a single way to access data, hierarchical structures like trees offer various traversal methods. Let's delve into the essential tree traversal techniques: inorder, preorder, and postorder.

### Sample Tree:

![Sample Tree](tree_traversal_example.png)

### Tree Structure:

```c
struct node {
    int data;
    struct node* left;
    struct node* right;
};
```

### Inorder Traversal:

In inorder traversal:

1. Visit all nodes in the left subtree.
2. Visit the root node.
3. Visit all nodes in the right subtree.

```c
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        display(root->data);
        inorder(root->right);
    }
}
```

### Preorder Traversal:

In preorder traversal:

1. Visit the root node.
2. Visit all nodes in the left subtree.
3. Visit all nodes in the right subtree.

```c
void preorder(struct node* root) {
    if (root != NULL) {
        display(root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
```

### Postorder Traversal:

In postorder traversal:

1. Visit all nodes in the left subtree.
2. Visit all nodes in the right subtree.
3. Visit the root node.

```c
void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        display(root->data);
    }
}
```

### Visualization:

- **Inorder**: Left subtree -> Root -> Right subtree
- **Preorder**: Root -> Left subtree -> Right subtree
- **Postorder**: Left subtree -> Right subtree -> Root
