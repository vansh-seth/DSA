## Bubble Sort Algorithm

Bubble sort is a simple sorting algorithm that iterates through a list, compares adjacent elements, and swaps them if they are in the wrong order. The process repeats until the list is sorted.

### Analogy with Air Bubbles

Much like air bubbles rising to the surface of water, elements in the list gradually move into their correct positions with each iteration, hence the name "bubble sort."

### How Bubble Sort Works

1. **First Iteration (Comparison and Swap)**:
   - Start from the beginning of the list.
   - Compare adjacent elements and swap them if they are in the wrong order.
   - Continue this process until reaching the end of the list.
   
2. **Remaining Iterations**:
   - Repeat the comparison and swap process for the remaining unsorted elements.
   - After each iteration, the largest unsorted element is placed at the end.
   
3. **Sorting Completion**:
   - The array is considered sorted when all elements are in the correct order.

### Bubble Sort Algorithm

Here's a simple representation of the bubble sort algorithm:

```python
def bubbleSort(array):
    for i in range(len(array)-1):
        for j in range(len(array)-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
```

- The outer loop iterates through each element of the array.
- The inner loop compares adjacent elements and swaps them if they are in the wrong order.

### Key Points

- Bubble sort is straightforward but not efficient for large datasets.
- It has a time complexity of O(n^2), making it impractical for large arrays.
- Despite its simplicity, bubble sort can be useful for educational purposes and small datasets.
