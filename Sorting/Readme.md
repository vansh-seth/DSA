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

```
bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort
```

- The outer loop iterates through each element of the array.
- The inner loop compares adjacent elements and swaps them if they are in the wrong order.

### Key Points

- Bubble sort is straightforward but not efficient for large datasets.
- It has a time complexity of O(n^2), making it impractical for large arrays.
- Despite its simplicity, bubble sort can be useful for educational purposes and small datasets.


## Understanding Bubble Sort Complexity

Bubble sort is a simple sorting algorithm that compares adjacent elements and swaps them if they are in the wrong order. While it's easy to implement, its efficiency is limited, especially for large datasets.

### Time Complexity

- **Best Case (O(n))**: Occurs when the array is already sorted. In this scenario, the algorithm only needs to pass through the elements once to confirm their sorted order.
- **Worst Case (O(n^2))**: Happens when the array is in reverse order, requiring a maximum number of comparisons and swaps to sort.
- **Average Case (O(n^2))**: If the array elements are randomly arranged, bubble sort typically performs with this complexity.

### Space Complexity

- **Space Complexity (O(1))**: Bubble sort is an in-place sorting algorithm, meaning it sorts the array without needing additional space proportional to the size of the input. It only requires a constant amount of extra space for variables used in swapping elements.

### Complexity Analysis

Bubble sort's time complexity arises from the number of comparisons and swaps required to sort the array. In each pass through the array, the algorithm compares adjacent elements, potentially leading to \( n(n-1)/2 \) comparisons in total, which simplifies to \( O(n^2) \).

### Bubble Sort Applications

Bubble sort, while inefficient for large datasets, finds utility in situations where:

- Complexity is not a critical factor.
- Simplicity and readability of code are preferred over optimization.


## Selection Sort Algorithm 

Selection sort is a simple sorting algorithm that repeatedly selects the smallest element from an unsorted portion of the list and moves it to the beginning of the list. It continues this process until the entire list is sorted.

### How Selection Sort Works

1. **Selecting the Minimum Element**:
   - Initially, the first element of the unsorted list is considered the minimum.
   - The algorithm compares this minimum with each subsequent element to find the smallest element in the unsorted portion.
   - If a smaller element is found, it becomes the new minimum.

2. **Placing the Minimum Element**:
   - After identifying the minimum element in the unsorted portion, it swaps the minimum element with the first unsorted element.
   - This process effectively moves the minimum element to its correct position at the beginning of the list.

3. **Iterative Process**:
   - The above steps are repeated for each element of the unsorted portion until the entire list is sorted.

### Selection Sort Algorithm

Here's a basic representation of the selection sort algorithm:

```python
def selectionSort(array):
    n = len(array)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if array[j] < array[min_index]:
                min_index = j
        array[i], array[min_index] = array[min_index], array[i]
```

- The outer loop iterates through each element of the array.
- Within each iteration, the inner loop finds the minimum element in the unsorted portion.
- Once the minimum element is identified, it's swapped with the first unsorted element.

### Key Points

- Selection sort has a time complexity of O(n^2) in all cases (best, worst, and average).
- It's an in-place sorting algorithm, meaning it sorts the array without needing additional space.
- Despite its simplicity, selection sort is not the most efficient algorithm for large datasets. However, it can be useful for small datasets or as an educational tool.
