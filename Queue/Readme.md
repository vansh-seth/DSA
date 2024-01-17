# Queue Data Structure

A queue is a fundamental data structure in programming, following the First In First Out (FIFO) rule - the item that goes in first is the item that comes out first.

## FIFO Representation of Queue

![image](https://github.com/vansh-seth/DSA/assets/111755254/e8357a21-eda7-4f0c-9df5-10b1347fe48b)

In programming, enqueue is the process of adding items to the queue, and dequeue is the process of removing items from the queue.

## Basic Operations of Queue

A queue supports the following operations:

- **Enqueue:** Add an element to the end of the queue.
- **Dequeue:** Remove an element from the front of the queue.
- **IsEmpty:** Check if the queue is empty.
- **IsFull:** Check if the queue is full.
- **Peek:** Get the value of the front of the queue without removing it.

## Working of Queue

Queue operations are managed by two pointers, FRONT and REAR:

- FRONT tracks the first element of the queue.
- REAR tracks the last element of the queue.

Initially, set the values of FRONT and REAR to -1.

### Enqueue Operation

1. Check if the queue is full.
2. For the first element, set the value of FRONT to 0.
3. Increase the REAR index by 1.
4. Add the new element in the position pointed to by REAR.

### Dequeue Operation

1. Check if the queue is empty.
2. Return the value pointed by FRONT.
3. Increase the FRONT index by 1.
4. For the last element, reset the values of FRONT and REAR to -1.

![image](https://github.com/vansh-seth/DSA/assets/111755254/32c9d096-e0de-4d79-a6b0-f6999c39a8e3)

## Limitations of Queue

After dequeuing from a full queue, empty spaces at the front cannot be used. We can only add indexes 0 and 1 when the queue is reset. Circular queues overcome this limitation.

![image](https://github.com/vansh-seth/DSA/assets/111755254/d20d25f9-7722-4386-8962-ae524cfafa5e)

## Complexity Analysis

The complexity of enqueue and dequeue operations in a queue using an array is O(1). Pop(N) in Python code may have a complexity of O(n) depending on the item's position.

## Applications of Queue

Queues find applications in CPU scheduling, disk scheduling, data transfer between processes, IO buffers, pipes, file IO, interrupt handling in real-time systems, and call center phone systems.

## Types of Queues

There are four types of queues:

1. **Simple Queue**
    - Insertion at the rear, removal at the front.
    - Follows FIFO rule.

   ![image](https://github.com/vansh-seth/DSA/assets/111755254/ae5eb05e-58ef-4a61-9dea-975a51de11fb)

2. **Circular Queue**
    - Last element points to the first element.
    - Better memory utilization compared to a simple queue.

    ![image](https://github.com/vansh-seth/DSA/assets/111755254/a0fbcaaf-a6be-45be-9485-474feb4289e5)

3. **Priority Queue**
    - Each element has a priority and is served accordingly.
    - Elements with the same priority are served based on their order in the queue.

    ![image](https://github.com/vansh-seth/DSA/assets/111755254/2629f999-1760-49ae-8490-6254fd93bc91)

4. **Double Ended Queue (Deque)**
    - Insertion and removal from both front and rear.
    - Does not follow the FIFO rule.
    
![image](https://github.com/vansh-seth/DSA/assets/111755254/04710161-4d3d-4caf-8ead-eed4035e3580)

Certainly! Here's a README.md content specifically for the Circular Queue Data Structure:

## Circular Queue Data Structure

A circular queue is an extension of a regular queue where the last element is connected to the first element, forming a circular-like structure.

## Circular Queue Representation

![image](https://github.com/vansh-seth/DSA/assets/111755254/db649255-21fa-478d-b1bf-4971b8f19622)

The circular queue addresses a significant limitation of a regular queue where after a series of insertions and deletions, non-usable empty space is left.

### Limitation of the Regular Queue

![image](https://github.com/vansh-seth/DSA/assets/111755254/5e0d92b0-f552-4199-b50e-3c73bddad26d)

In a regular queue, indexes 0 and 1 can only be used after resetting the queue (deleting all elements), reducing the actual size of the queue.

## How Circular Queue Works

Circular Queue works by the process of circular increment. When attempting to increment the pointer and reaching the end of the queue, it starts again from the beginning. Circular increment is performed by modulo division with the queue size:

```c
if REAR + 1 == SIZE (overflow!), REAR = (REAR + 1) % SIZE
```

## Circular Queue Operations

Circular queue operations involve two pointers, FRONT and REAR:

- FRONT tracks the first element of the queue.
- REAR tracks the last elements of the queue.

Initially, set the values of FRONT and REAR to -1.

### Enqueue Operation

1. Check if the queue is full.
2. For the first element, set the value of FRONT to 0.
3. Circularly increase the REAR index by 1 (i.e., if the rear reaches the end, next it would be at the start of the queue).
4. Add the new element at the position pointed to by REAR.

### Dequeue Operation

1. Check if the queue is empty.
2. Return the value pointed by FRONT.
3. Circularly increase the FRONT index by 1.
4. For the last element, reset the values of FRONT and REAR to -1.

### Additional Cases for Full Queue

- Case 1: `FRONT == 0 && REAR == SIZE - 1`
- Case 2: `FRONT == REAR + 1`

![image](https://github.com/vansh-seth/DSA/assets/111755254/f2309b43-f930-48ce-ab1f-dca60839d9e6)

## Circular Queue Complexity Analysis

The complexity of the enqueue and dequeue operations of a circular queue is O(1) for array implementations.

## Applications of Circular Queue

Circular queues find applications in:

- CPU scheduling
- Memory management
- Traffic Management

## Priority Queue Data Structure

A priority queue is a special type of queue where each element is associated with a priority value, and elements are served based on their priority. Higher-priority elements are served first, and if elements have the same priority, they are served according to their order in the queue.

![image](https://github.com/vansh-seth/DSA/assets/111755254/0791d172-3719-47e0-96fe-2d1f3220f486)

## Assigning Priority Value

Priority values can be assigned based on the element's actual value, with the highest or lowest values considered the highest priority. Priority can also be set according to specific needs.

## Removing Highest Priority Element

The element with the highest priority is removed first. If elements have the same priority, they are served in the order they appear in the queue.

## Difference between Priority Queue and Normal Queue

While a regular queue follows the first-in-first-out rule, a priority queue serves elements based on their priority, removing the highest priority element first.

## Implementation of Priority Queue

Priority queues can be implemented using various data structures such as arrays, linked lists, heap data structures, or binary search trees. The heap data structure, specifically the max-heap, provides an efficient implementation of priority queues.

### Comparative Analysis of Implementations

| Operations         | Linked List | Binary Heap | Binary Search Tree |
| ------------------- | ----------- | ----------- | ------------------- |
| Peek (Find max/min) | O(1)        | O(1)        | O(1)                |
| Insert              | O(n)        | O(log n)    | O(log n)            |
| Delete              | O(1)        | O(log n)    | O(log n)            |

### Priority Queue Operations

Basic operations of a priority queue include inserting, removing, peeking, and extracting max/min elements.

### 1. Inserting an Element into the Priority Queue

- Insert the new element at the end of the tree.
- Heapify the tree.

![image](https://github.com/vansh-seth/DSA/assets/111755254/92c91d08-cbaf-47ae-9adb-7bf0cadee285)

![image](https://github.com/vansh-seth/DSA/assets/111755254/ae2b4d99-4a21-4a14-b7f5-79a1ba46d039)

#### Algorithm for Insertion:

```plaintext
If there is no node,
  create a newNode.
else (a node is already present),
  insert the newNode at the end (last node from left to right).
  
Heapify the tree.
```

### 2. Deleting an Element from the Priority Queue

- Select the element to be deleted.
- Swap it with the last element.
- Remove the last element.
- Heapify the tree.

![image](https://github.com/vansh-seth/DSA/assets/111755254/f7711afd-16dd-44b5-a827-f0aa3648c093)

![image](https://github.com/vansh-seth/DSA/assets/111755254/0669e9c0-b55e-4bbc-b23f-72ddddd67094)

![image](https://github.com/vansh-seth/DSA/assets/111755254/4a3556d6-390c-4584-a892-b67dd5ab2a5a)

![image](https://github.com/vansh-seth/DSA/assets/111755254/55964542-8c9a-402a-8007-d7fdcdd235dd)


#### Algorithm for Deletion:

```plaintext
If nodeToBeDeleted is the leafNode,
  remove the node.
Else swap nodeToBeDeleted with the lastLeafNode,
  remove noteToBeDeleted.
   
Heapify the array.
```

### 3. Peeking from the Priority Queue (Find max/min)

Peek operation returns the maximum element from Max Heap or the minimum element from Min Heap without deleting the node.

### 4. Extract-Max/Min from the Priority Queue

Extract-Max returns the node with the maximum value after removing it from a Max Heap, whereas Extract-Min returns the node with the minimum value after removing it from Min Heap.

## Priority Queue Applications

Some applications of a priority queue include:

- Dijkstra's algorithm
- Implementing stack
- Load balancing and interrupt handling in an operating system
- Data compression in Huffman code

## Deque (Double-Ended Queue) Data Structure

A Deque, or Double Ended Queue, is a type of queue where insertion and removal of elements can be performed from either the front or the rear, not following the FIFO (First In First Out) rule.

## Representation of Deque

![image](https://github.com/vansh-seth/DSA/assets/111755254/777a7762-b39d-402a-b9bf-f0a1bf466731)

### Types of Deque

1. **Input Restricted Deque:**
   - Input is restricted at a single end but allows deletion at both ends.

2. **Output Restricted Deque:**
   - Output is restricted at a single end but allows insertion at both ends.

## Operations on a Deque

Below is the circular array implementation of a deque. In a circular array, if the array is full, we start from the beginning.

### Initialization
1. Take an array (deque) of size n.
2. Set two pointers at the first position and set `front = -1` and `rear = 0`.

![image](https://github.com/vansh-seth/DSA/assets/111755254/7efc5097-3454-468d-a819-d5fe0f93c68c)

### 1. Insert at the Front

![image](https://github.com/vansh-seth/DSA/assets/111755254/ba8fb70b-4b99-46a1-abdb-761c558e95de)

- If `front < 1`, reinitialize `front = n-1` (last index).

![image](https://github.com/vansh-seth/DSA/assets/111755254/918063f0-72de-4557-a027-185e1eefb5b7)

- Else, decrease `front` by 1.
- Add the new element at the position of `front`.

![image](https://github.com/vansh-seth/DSA/assets/111755254/4c7f9542-2abd-4ba3-988e-a6f947e17bc4)

### 2. Insert at the Rear
- Check if the deque is full.

![image](https://github.com/vansh-seth/DSA/assets/111755254/868bbed1-9dc3-4322-90a4-061a82fed431)

- If the deque is full, reinitialize `rear = 0`.
- Else, increase `rear` by 1.

![image](https://github.com/vansh-seth/DSA/assets/111755254/bdc21389-7075-4fab-b9b6-0e1c596089f2)

- Add the new element at the position of `rear`.

![image](https://github.com/vansh-seth/DSA/assets/111755254/ef118c62-610f-47dc-8e78-78f6b66e1fac)


### 3. Delete from the Front
- Check if the deque is empty.

![image](https://github.com/vansh-seth/DSA/assets/111755254/bb8cfcdf-1153-42db-bde2-72226e508dbb)

- If the deque is empty (i.e., `front = -1`), deletion cannot be performed (underflow condition).
- If the deque has only one element (i.e., `front = rear`), set `front = -1` and `rear = -1`.
- Else if `front` is at the end (i.e., `front = n - 1`), set `front = 0`.
- Else, `front = front + 1`.

![image](https://github.com/vansh-seth/DSA/assets/111755254/1408bf16-352e-4cc6-bea0-f3d491171d0a)

### 4. Delete from the Rear
- Check if the deque is empty.

![image](https://github.com/vansh-seth/DSA/assets/111755254/aa9875a0-f168-4712-909b-6271333c229b)

- If the deque is empty (i.e., `front = -1`), deletion cannot be performed (underflow condition).
- If the deque has only one element (i.e., `front = rear`), set `front = -1` and `rear = -1`, else follow the steps below.
- If `rear` is at the front (i.e., `rear = 0`), set `rear = n - 1`.
- Else, `rear = rear - 1`.

![image](https://github.com/vansh-seth/DSA/assets/111755254/e7353692-bd17-40fc-b21f-9ecf1f9746ba)

### 5. Check Empty
This operation checks if the deque is empty. If `front = -1`, the deque is empty.

### 6. Check Full
This operation checks if the deque is full. If `front = 0` and `rear = n - 1` OR `front = rear + 1`, the deque is full.

## Time Complexity

The time complexity of all the above operations is constant, i.e., O(1).

## Applications of Deque Data Structure

Some applications of a deque data structure include:

- Undo operations on software.
- Storing history in browsers.
- Implementing both stacks and queues.
