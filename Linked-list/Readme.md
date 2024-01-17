## Linked List in C

A linked list is a linear data structure that consists of a series of connected nodes. Each node stores data and the address of the next node. Linked lists can be of multiple types, such as singly, doubly, and circular linked lists. In this example, we will focus on the singly linked list.

![image](https://github.com/vansh-seth/DSA/assets/111755254/a6d9346c-c6a7-4e63-9d61-a63677dac133)

### Representation of Linked List

Let's start by understanding how each node of the linked list is represented in C. Each node consists of a data item and an address pointing to the next node. We use a struct to wrap both the data item and the next node reference:

Each node consists:

A data item
An address of another node
```c
struct node
{
  int data;
  struct node *next;
};
```

Understanding the structure of a linked list node is crucial to working with it.

### Creating a Simple Linked List

Now, let's create a simple linked list with three nodes:

```c
/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = NULL;

/* Save the address of the first node in head */
head = one;
```

In these few steps, we have successfully created a simple linked list with three nodes.

![image](https://github.com/vansh-seth/DSA/assets/111755254/c512fde0-4bb5-455d-a51b-eae8ac3cb319)

### Inserting an Element into the Linked List

The power of a linked list lies in its ability to break and rejoin the chain easily. For example, to insert an element 4 between nodes 1 and 2, you can follow these steps:

1. Create a new struct node and allocate memory for it.
2. Set its data value to 4.
3. Point its next pointer to the struct node containing 2 as the data value.
4. Change the next pointer of node 1 to the newly created node.

### Linked List Complexity

Time Complexity:

| Operation | Worst Case | Average Case |
| --------- | ---------- | ------------ |
| Search    | O(n)       | O(n)         |
| Insert    | O(1)       | O(1)         |
| Deletion  | O(1)       | O(1)         |

These complexities highlight the advantages of linked lists, particularly in terms of constant-time insertions and deletions compared to arrays.

## Linked List Applications
- Dynamic memory allocation
- Implemented in stack and queue
- In undo functionality of softwares
- Hash tables, Graphs

# Linked List Operations

## Introduction
Linked lists are dynamic data structures that allow efficient insertion and deletion of elements. This document outlines basic operations on linked lists, including traversal, insertion, deletion, search, and sorting.

### Node Structure
```c
struct node {
  int data;
  struct node *next;
};
```

## Things to Remember
- `head` points to the first node of the linked list.
- The `next` pointer of the last node is `NULL`, indicating the end of the linked list.

## Linked List Operations

### Traverse a Linked List
Display the contents of a linked list by traversing through its elements.
```c
struct node *temp = head;
printf("\n\nList elements are - \n");
while(temp != NULL) {
  printf("%d --->", temp->data);
  temp = temp->next;
}
```

### Insert Elements to a Linked List

#### 1. Insert at the Beginning
Allocate memory for a new node, set its data, and update pointers.
```c
struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = head;
head = newNode;
```

#### 2. Insert at the End
Allocate memory for a new node, set its data, and traverse to the last node.
```c
struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = NULL;

struct node *temp = head;
while(temp->next != NULL) {
  temp = temp->next;
}

temp->next = newNode;
```

#### 3. Insert at the Middle
Allocate memory for a new node, set its data, and insert it at the specified position.
```c
struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;

struct node *temp = head;
for(int i = 2; i < position; i++) {
  if(temp->next != NULL) {
    temp = temp->next;
  }
}
newNode->next = temp->next;
temp->next = newNode;
```

### Delete from a Linked List

#### 1. Delete from the Beginning
Update the `head` pointer to skip the first node.
```c
head = head->next;
```

#### 2. Delete from the End
Traverse to the second last element and update its `next` pointer to `NULL`.
```c
struct node* temp = head;
while(temp->next->next != NULL) {
  temp = temp->next;
}
temp->next = NULL;
```

#### 3. Delete from the Middle
Traverse to the element before the one to be deleted and update pointers.
```c
for(int i = 2; i < position; i++) {
  if(temp->next != NULL) {
    temp = temp->next;
  }
}
temp->next = temp->next->next;
```

### Search an Element on a Linked List
Search for an element in the linked list using a loop.
```c
bool searchNode(struct node** head_ref, int key) {
  struct node* current = *head_ref;

  while (current != NULL) {
    if (current->data == key) return true;
    current = current->next;
  }
  return false;
}
```

### Sort Elements of a Linked List
Use the Bubble Sort algorithm to sort elements in ascending order.
```c
void sortLinkedList(struct node** head_ref) {
  struct node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
    return;
  } else {
    while (current != NULL) {
      index = current->next;

      while (index != NULL) {
        if (current->data > index->data) {
          temp = current->data;
          current->data = index->data;
          index->data = temp;
        }
        index = index->next;
      }
      current = current->next;
    }
  }
}
```

Before using these operations, make sure to understand the basics of linked lists.

# Types of Linked List

## 1. Singly Linked List

A singly linked list is the most common type. Each node contains data and a pointer to the next node.

![image](https://github.com/vansh-seth/DSA/assets/111755254/4f47d15f-43c6-4f6f-8dd3-c2a403629a3f)

### Node Representation:
```c
struct node {
    int data;
    struct node *next;
};
```

### Example:
```c
/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = NULL;

/* Save the address of the first node in head */
head = one;
```

## 2. Doubly Linked List

![image](https://github.com/vansh-seth/DSA/assets/111755254/84b74aa6-be51-49a4-abf4-bdb7d612bb93)

A doubly linked list extends the singly linked list by adding a pointer to the previous node. This allows traversal in both forward and backward directions.

### Node Representation:
```c
struct node {
    int data;
    struct node *next;
    struct node *prev;
};
```

### Example:
```c
/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
one->prev = NULL;

two->next = three;
two->prev = one;

three->next = NULL;
three->prev = two;

/* Save the address of the first node in head */
head = one;
```


## 3. Circular Linked List

![image](https://github.com/vansh-seth/DSA/assets/111755254/b8108087-b22d-4f39-966d-c38182e93e59)

A circular linked list is a variation where the last element is linked to the first element, forming a circular loop.

### Example (Singly Linked):
```c
/* Initialize nodes */
struct node *head;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;

/* Allocate memory */
one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

/* Assign data values */
one->data = 1;
two->data = 2;
three->data = 3;

/* Connect nodes */
one->next = two;
two->next = three;
three->next = one;

/* Save the address of the first node in head */
head = one;
```

