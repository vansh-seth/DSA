## Stack Data Structure

A stack is a linear data structure that follows the Last In First Out (LIFO) principle, resembling a pile of plates. The last element inserted into the stack is the first one to be removed.

### Stack Representation

![image](https://github.com/vansh-seth/DSA/assets/111755254/70a751ad-e083-4fa9-b3d3-9a4236670b48)

*Elements are added on top and removed from the top, similar to a pile of plates.*

### LIFO Principle of Stack

In programming terms, pushing an item onto the stack is called **push**, and removing an item is called **pop**.

![image](https://github.com/vansh-seth/DSA/assets/111755254/154bc750-6d24-4613-9434-7b9c757e4ded)

*Implementing the LIFO principle using push and pop operations.*

### Basic Operations of Stack

1. **Push:** Add an element to the top of a stack.
2. **Pop:** Remove an element from the top of a stack.
3. **IsEmpty:** Check if the stack is empty.
4. **IsFull:** Check if the stack is full.
5. **Peek:** Get the value of the top element without removing it.

### Working of Stack Data Structure

- A pointer called **TOP** keeps track of the top element in the stack.
- When initializing the stack, set its value to -1 to check if the stack is empty (i.e., TOP == -1).
- On pushing an element, increase the value of TOP and place the new element in the position pointed to by TOP.
- On popping an element, return the element pointed to by TOP and reduce its value.
- Check if the stack is full before pushing.
- Check if the stack is empty before popping.

![image](https://github.com/vansh-seth/DSA/assets/111755254/67bc1be3-da72-4c6b-b9a6-009f6ef50a3f)

### Stack Time Complexity

For the array-based implementation of a stack, the push and pop operations take constant time, i.e., O(1).

### Applications of Stack Data Structure

1. **Reversing a Word:** Put all the letters in a stack and pop them out to get the letters in reverse order.
2. **Compilers:** Compilers use the stack to evaluate expressions by converting them to prefix or postfix form.
3. **Browsers:** The back button in browsers uses a stack to keep track of visited URLs, allowing navigation in reverse order.

## Please refer to my infix-postfix-prefix.md to learn about infix postfix, prefix 
