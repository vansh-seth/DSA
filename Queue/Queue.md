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

