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

![image](https://github.com/vansh-seth/DSA/assets/111755254/d44b0e3b-b25b-4504-8e5c-c92b46f91060)


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

# Binary Tree Overview

A binary tree is a fundamental tree data structure where each parent node can have at most two children. Each node in a binary tree contains:

- Data item
- Address of the left child
- Address of the right child

## Types of Binary Trees

### 1. Full Binary Tree

A full binary tree is characterized by each internal node having exactly two children or no children at all.

![image](https://github.com/vansh-seth/DSA/assets/111755254/d2994e80-915d-40ff-ace6-7f02432267ec)


### 2. Perfect Binary Tree

In a perfect binary tree, every internal node has exactly two child nodes, and all leaf nodes are at the same level.

![image](https://github.com/vansh-seth/DSA/assets/111755254/628df1ad-2344-4ba3-87d7-943bb9188af1)

### 3. Complete Binary Tree

A complete binary tree requires every level to be completely filled, with all leaf elements leaning towards the left. The last leaf element may not have a right sibling.

![image](https://github.com/vansh-seth/DSA/assets/111755254/31b9d097-31de-4fb7-aae1-edee1072fb51)

### 4. Degenerate or Pathological Tree

A degenerate or pathological tree has a single child either to the left or right.

![image](https://github.com/vansh-seth/DSA/assets/111755254/dd594684-e98c-4369-8c64-4d2be63304dc)

### 5. Skewed Binary Tree

A skewed binary tree is pathological, dominated by either left or right nodes, leading to left-skewed or right-skewed binary trees.

![image](https://github.com/vansh-seth/DSA/assets/111755254/8c9375f3-dc61-4425-8311-4b778a4370fc)

### 6. Balanced Binary Tree

A balanced binary tree maintains a height difference of 0 or 1 between the left and right subtrees for each node.

![image](https://github.com/vansh-seth/DSA/assets/111755254/53123c53-0903-4bcd-b2c7-ebf854c89c48)

## Binary Tree Representation

In programming languages like C, a node of a binary tree is commonly represented using a structure containing data and pointers to left and right child nodes.

```c
struct node {
    int data;
    struct node *left;
    struct node *right;
};
```

Binary trees find applications across various domains due to their efficient data organization and traversal capabilities. Some notable applications include:

1. **Data Storage and Retrieval**:
   - Binary trees facilitate quick and easy access to data elements, making them ideal for implementing data storage and retrieval mechanisms in databases and file systems.

2. **Router Algorithms**:
   - In network routing algorithms, binary trees are utilized to efficiently store and retrieve routing information, helping routers make informed decisions about packet forwarding and network routing paths.

3. **Heap Data Structure**:
   - Binary trees serve as the foundational structure for implementing heap data structures, such as binary heaps. Binary heaps are commonly used in priority queues and sorting algorithms like heap sort, offering efficient insertion, deletion, and retrieval operations.

4. **Syntax Trees**:
   - In compilers and parsing algorithms, binary trees are employed to construct syntax trees that represent the syntactic structure of source code. Syntax trees help validate the syntax of programming languages and facilitate subsequent compilation and interpretation processes.

Binary trees' versatility and efficiency make them indispensable in a wide range of applications, contributing to faster data processing, optimized algorithm performance, and improved system reliability.

A Full Binary Tree, also known as a proper binary tree, is a special type of binary tree where every internal node has either two children or no children at all. This unique property leads to several interesting theorems and relationships within the structure of a full binary tree:

Let's denote:
- \( i \) as the number of internal nodes
- \( n \) as the total number of nodes
- \( l \) as the number of leaves
- \( \lambda \) as the number of levels

Here are some key theorems related to full binary trees:

1. **Number of Leaves and Internal Nodes**:
   - The number of leaves (\( l \)) in a full binary tree is always one more than the number of internal nodes (\( i \)).

2. **Total Number of Nodes**:
   - The total number of nodes (\( n \)) in a full binary tree is given by \( 2i + 1 \).

3. **Number of Internal Nodes**:
   - The number of internal nodes (\( i \)) in a full binary tree is \( \frac{n - 1}{2} \).

4. **Number of Leaves (Alternative)**:
   - The number of leaves (\( l \)) in a full binary tree is \( \frac{n + 1}{2} \).

5. **Total Number of Nodes (Alternative)**:
   - The total number of nodes (\( n \)) in a full binary tree with \( l \) leaves is \( 2l - 1 \).

6. **Number of Internal Nodes (Alternative)**:
   - The number of internal nodes (\( i \)) in a full binary tree with \( l \) leaves is \( l - 1 \).

7. **Maximum Number of Leaves**:
   - The number of leaves in a full binary tree with \( \lambda \) levels is at most \( 2^\lambda - 1 \).

These theorems provide valuable insights into the structure and properties of full binary trees, aiding in their analysis and utilization in various algorithms and applications.

### Perfect Binary Trees

A perfect binary tree is a specific type of binary tree characterized by its structural properties. In a perfect binary tree:

- Every internal node has exactly two child nodes.
- All leaf nodes are at the same level.

#### Characteristics:

1. **Node Degrees**: 
   - All internal nodes have a degree of 2, meaning they have exactly two child nodes.
   
2. **Recursive Definition**:
   - A perfect binary tree can be defined recursively as follows:
     - If a single node has no children, it constitutes a perfect binary tree of height \( h = 0 \).
     - For nodes with a height \( h > 0 \), they are perfect binary trees if both of their subtrees are of height \( h - 1 \) and are non-overlapping.

#### Recursive Representation:

A perfect binary tree can be represented recursively. This representation entails:
- Nodes with no children define a perfect binary tree of height \( h = 0 \).
- Nodes with a height \( h > 0 \) form a perfect binary tree if both their subtrees are of height \( h - 1 \) and are non-overlapping.


### Perfect Binary Tree Theorems

Perfect binary trees possess several important theorems regarding their structure and characteristics:

1. **Node Count Theorem**: 
   - A perfect binary tree of height \( h \) contains \( 2^{h+1} - 1 \) nodes.

2. **Height Theorem**:
   - A perfect binary tree with \( n \) nodes has a height of \( \log(n + 1) - 1 \), which is \( \Theta(\log n) \).

3. **Leaf Node Theorem**:
   - A perfect binary tree of height \( h \) comprises \( 2^h \) leaf nodes.

4. **Average Node Depth Theorem**:
   - The average depth of a node in a perfect binary tree is \( \Theta(\log n) \).

These theorems are fundamental in understanding the structural properties and computational complexities associated with perfect binary trees.

### Complete Binary Tree

A complete binary tree is a type of binary tree characterized by the following properties:

1. **Filled Levels**: 
   - All levels of the tree are completely filled except possibly the last level.
   
2. **Left-Leaning Leaf Nodes**:
   - All leaf elements lean towards the left side of the tree.
   
3. **Right Sibling Variability**:
   - The last leaf element might not have a right sibling, distinguishing it from a full binary tree.

#### Differences from Full Binary Tree:

- While similar to a full binary tree, a complete binary tree differs in the placement of leaf elements and the presence of right siblings.
  
#### Creating a Complete Binary Tree:

The creation process involves the following steps:

1. **Root Node Selection**:
   - Choose the first element of the list as the root node.
   
2. **Child Node Placement**:
   - Place the second element as the left child of the root node and the third element as the right child.
   
3. **Level-wise Expansion**:
   - Continue adding elements level-wise, ensuring that each level is filled from left to right.
   
4. **Repeat Process**:
   - Repeat the placement process until reaching the last element.

This method ensures the formation of a complete binary tree while maintaining the specified characteristics.
