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

### Relationship between Array Indexes and Tree Elements in a Complete Binary Tree

In a complete binary tree, there exists a direct relationship between the array indexes and the elements of the tree. This relationship facilitates easy traversal and manipulation of the tree elements stored in an array representation.

#### Rules:

1. **Finding Children**:
   - The left child of an element at index \( i \) is located at index \( 2i + 1 \).
   - The right child of an element at index \( i \) is located at index \( 2i + 2 \).

2. **Finding Parent**:
   - The parent of an element at index \( i \) is located at index \( \left\lfloor \frac{{i - 1}}{2} \right\rfloor \).

#### Examples:

- Left child of element at index 0:
  - \( 2*0 + 1 = 1 \)
  - Element at index 1: 12

- Right child of element at index 0:
  - \( 2*0 + 2 = 2 \)
  - Element at index 2: 9

- Left child of element at index 1:
  - \( 2*1 + 1 = 3 \)
  - Element at index 3: 5

- Right child of element at index 1:
  - \( 2*1 + 2 = 4 \)
  - Element at index 4: 6

#### Parent Finding:

- Parent of element at index 2:
  - \( \left\lfloor \frac{{2 - 1}}{2} \right\rfloor = 1 \)
  - Element at index 1: 12

- Parent of element at index 1:
  - \( \left\lfloor \frac{{1 - 1}}{2} \right\rfloor = 0 \)
  - Element at index 0: 1

#### Importance:

Understanding this mapping is crucial for various applications, notably:
- **Heap-based Data Structures**: Heap data structures rely on complete binary trees for efficient implementation.
- **Heap Sort**: Heap sort utilizes heap data structures for sorting elements.

This relationship simplifies tree manipulation and forms the basis for implementing algorithms efficiently.


### Balanced Binary Tree

A balanced binary tree, also known as a height-balanced binary tree, is characterized by the following conditions:

1. **Height Difference**: 
   - The height difference between the left and right subtrees of any node is not more than 1.

2. **Balanced Subtrees**:
   - Both the left and right subtrees of any node are themselves balanced binary trees.

#### Conditions for a Height-Balanced Binary Tree:

1. **Height Difference Constraint**:
   - For any node, the absolute difference in height between its left and right subtrees is less than or equal to 1.

2. **Recursive Balance**:
   - Both the left and right subtrees must individually satisfy the conditions of being height-balanced binary trees.

#### Visual Representation:

- **Balanced Binary Tree Example:**

![image](https://github.com/vansh-seth/DSA/assets/111755254/5a245479-e23a-4d32-a3a3-016393ae224f)

- **Unbalanced Binary Tree Example:**

![image](https://github.com/vansh-seth/DSA/assets/111755254/8ad7c864-d094-4e50-849a-5201257fbf95)

#### Importance:

- **Efficient Operations**:
  - Maintaining balance ensures that the height of the tree remains logarithmic, leading to more efficient search and retrieval operations.

- **Avoiding Degeneracy**:
  - Unbalanced trees, on the other hand, can degrade into linked lists, resulting in poor performance.

#### Balanced Binary Tree Applications
- AVL tree
- Balanced Binary Search Tree

### Binary Search Tree (BST)

A Binary Search Tree (BST) is a fundamental data structure that facilitates efficient searching and sorting of elements. It possesses the following characteristics:

1. **Binary Structure**:
   - Each node in the tree can have at most two children, commonly referred to as the left child and the right child.

2. **Search Efficiency**:
   - It enables searching for elements in \( O(\log n) \) time complexity, where \( n \) represents the number of elements in the tree.

#### Properties:

A Binary Search Tree maintains the following properties:

1. **Left Subtree Values**:
   - All nodes in the left subtree of a node contain values that are less than the value of the node.

2. **Right Subtree Values**:
   - All nodes in the right subtree of a node contain values that are greater than the value of the node.

3. **Recursive Structure**:
   - Both the left and right subtrees of each node are themselves Binary Search Trees, adhering to the above two properties.

#### Validity Example:

- In the example provided, the binary tree on the right is not a valid Binary Search Tree because the right subtree of the node "3" contains a value smaller than it, violating the properties of a Binary Search Tree.

#### Basic Operations:

Two fundamental operations performed on a Binary Search Tree include:

1. **Insertion**:
   - Adding a new element to the tree while maintaining its binary search tree properties.

2. **Search**:
   - Searching for the presence of a specific element in the tree efficiently in \( O(\log n) \) time.


### Search Operation in Binary Search Tree (BST)

The search operation in a Binary Search Tree (BST) relies on the property that each left subtree contains values below the root, while each right subtree contains values above the root. This property enables efficient searching by traversing through the tree based on the comparison of the target value with the values at each node.

#### Algorithm:

1. **Base Case**:
   - If the root is NULL, return NULL, indicating that the value is not found.

2. **Comparison**:
   - If the target value is equal to the data at the current root, return the data.

3. **Traversal**:
   - If the target value is less than the data at the current root, recursively search in the left subtree.
   - If the target value is greater than the data at the current root, recursively search in the right subtree.

#### Visualization:

![image](https://github.com/vansh-seth/DSA/assets/111755254/46866867-3fb4-4edb-b6f1-9388c4efa366)


- **Example**: Searching for value 4 in the BST
  1. Starting from the root (8), we compare 4 with the root's data. ![image](https://github.com/vansh-seth/DSA/assets/111755254/46866867-3fb4-4edb-b6f1-9388c4efa366)
  2. Since 4 is less than 8, we traverse to the left subtree of 8. ![image](https://github.com/vansh-seth/DSA/assets/111755254/b704877d-e9ce-4c25-80ae-dd93b7377c9e)

  3. Continuing the process, we traverse through the left subtree of 8, then the right subtree of 3, and finally the left subtree of 6. ![image](https://github.com/vansh-seth/DSA/assets/111755254/c1ab02bf-3b1e-44ec-8cd8-da7ea2c9ef69)

  4. Upon finding the value 4, we return it.

  ![image](https://github.com/vansh-seth/DSA/assets/111755254/5679f488-71fe-497f-b4aa-3b9f8fb52790)

  5. If the value is not found, eventually, we reach a leaf node with NULL, indicating the value is not present.

![image](https://github.com/vansh-seth/DSA/assets/111755254/198f489a-83cc-4a14-b391-c9fc30db386d)


#### Propagation:
- As the search operation progresses recursively, if the value is found in any subtree, it is propagated up through the recursive calls until it is returned as the final result.
- If the value is not found, NULL is returned, ultimately indicating absence.

Understanding this recursive process helps efficiently locate elements within a BST while navigating through its nodes based on the comparisons made at each step.

### Insert Operation in Binary Search Tree (BST)

The insertion operation in a Binary Search Tree (BST) involves adding a new node to the tree while maintaining the BST property that all elements in the left subtree are lesser than the root, and all elements in the right subtree are greater than the root.

#### Algorithm:

1. **Base Case**:
   - If the node is NULL, indicating an empty subtree, create a new node with the given data and return it.

2. **Comparison**:
   - If the data to be inserted is less than the current node's data, recursively insert it into the left subtree.
   - If the data to be inserted is greater than the current node's data, recursively insert it into the right subtree.

3. **Return Node**:
   - Return the current node after insertion, ensuring that the tree structure remains intact.

#### Visualization:

- **Example**: Inserting value 4 into the existing BST
  1. Starting from the root (8), compare 4 with the root's data. 
  2. Since 4 is less than 8, traverse to the left subtree of 8. 
  3. Continuing the process, traverse through the left subtree of 8, then the right subtree of 4, and finally the left subtree of 6.
  4. Upon reaching the appropriate position, insert 4 as the left child of 6.
  5. After insertion, return the modified subtree to maintain the overall structure of the BST.

![image](https://github.com/vansh-seth/DSA/assets/111755254/1d0df488-6505-41b7-8373-46b4105bd8c7)

![image](https://github.com/vansh-seth/DSA/assets/111755254/b882aa22-520a-4bc6-9eff-33ede8b54dab)

![image](https://github.com/vansh-seth/DSA/assets/111755254/b8c7e647-f28b-44c6-b66d-6f69fb768675)

![image](https://github.com/vansh-seth/DSA/assets/111755254/91ac5a9b-6876-49a6-abe3-45539ce9912e)

![image](https://github.com/vansh-seth/DSA/assets/111755254/91ac5a9b-6876-49a6-abe3-45539ce9912e)

#### Importance of Returning Node:

- The return statement at the end of the function ensures that the tree structure remains intact during the upward recursion step.
- It ensures that as we move back up the tree, the other node connections aren't altered, preserving the integrity of the BST.

Understanding the insertion process in a BST is crucial for dynamically updating the tree with new elements while adhering to the BST properties.

### Deletion Operation in Binary Search Tree (BST)

When deleting a node from a Binary Search Tree (BST), there are three primary cases to consider, each requiring different procedures to maintain the binary search tree properties.

#### Case I: Deleting a Leaf Node

- **Action**: Simply remove the node from the tree.
- **Example**: Deleting node 4, a leaf node.
- **Result**: Node 4 is removed from the tree.

![image](https://github.com/vansh-seth/DSA/assets/111755254/2c2f0662-076f-4a0c-82eb-fae6a5f2d944)


#### Case II: Deleting a Node with a Single Child

- **Action**: Replace the node with its child node.
- **Example**: Deleting node 6, which has a single child 4.
- **Result**: Node 6 is replaced with its child 4, and 4 is removed from its original position.
  
![image](https://github.com/vansh-seth/DSA/assets/111755254/dee96d9e-dd3f-4a40-adfc-20debc984e88)


#### Case III: Deleting a Node with Two Children

- **Action**: Find the inorder successor of the node to be deleted.
- **Inorder Successor**: The smallest node in the right subtree of the node to be deleted.
- **Replace and Remove**: Replace the node with its inorder successor, and remove the inorder successor from its original position.
- **Example**: Deleting node 3, which has two children.
- **Result**: Node 3 is replaced with its inorder successor 4, and 4 is removed from its original position.

![image](https://github.com/vansh-seth/DSA/assets/111755254/1443d549-2f95-48ae-8306-933366ba1a22)


#### Importance of Cases:

- **Maintaining BST Properties**: Each case ensures that the binary search tree properties are preserved after deletion.
- **Efficient Removal**: The appropriate case is selected based on the structure of the node to be deleted, allowing for efficient removal while retaining the integrity of the tree.



Understanding these cases and their corresponding actions is essential for managing the structure and integrity of a Binary Search Tree during deletion operations.

