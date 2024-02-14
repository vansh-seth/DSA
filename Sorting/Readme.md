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

```
selectionSort(array, size)
  repeat (size - 1) times
  set the first unsorted element as the minimum
  for each of the unsorted elements
    if element < currentMinimum
      set element as new minimum
  swap minimum with first unsorted position
end selectionSort
```

- The outer loop iterates through each element of the array.
- Within each iteration, the inner loop finds the minimum element in the unsorted portion.
- Once the minimum element is identified, it's swapped with the first unsorted element.

### Key Points

- Selection sort has a time complexity of O(n^2) in all cases (best, worst, and average).
- It's an in-place sorting algorithm, meaning it sorts the array without needing additional space.
- Despite its simplicity, selection sort is not the most efficient algorithm for large datasets. However, it can be useful for small datasets or as an educational tool.

## Understanding Selection Sort Complexity

Selection sort is a straightforward sorting algorithm that repeatedly selects the smallest element from an unsorted portion of the list and places it at the beginning. Let's explore its complexity and applications.

### Time Complexity

- **Best Case (O(n^2))**: Occurs when the array is already sorted. Despite being sorted, the algorithm still iterates through the array, resulting in the same number of comparisons and swaps as in the worst case.
- **Worst Case (O(n^2))**: Happens when the array is in reverse order, requiring the maximum number of comparisons and swaps.
- **Average Case (O(n^2))**: In scenarios where the elements are randomly arranged, selection sort typically performs with this complexity.

### Space Complexity

- **Space Complexity (O(1))**: Selection sort is an in-place sorting algorithm, meaning it doesn't require additional space proportional to the size of the input. It only uses a constant amount of extra space for variables used in swapping elements.

### Complexity Analysis

The time complexity of selection sort stems from the number of comparisons and swaps needed to sort the array. At each step, the algorithm iterates through the unsorted portion to find the minimum element, resulting in \( n(n-1)/2 \) comparisons in total, which simplifies to \( O(n^2) \).

### Selection Sort Applications

Selection sort finds application in scenarios where:

- Sorting a small list is necessary.
- The cost of swapping elements is not a significant concern.
- It's crucial to check all elements in the list.
- The write cost to memory matters, such as in flash memory, where the number of writes/swaps is \( O(n) \) compared to \( O(n^2) \) in bubble sort.

# Insertion Sort Algorithm

Insertion sort is a simple and efficient sorting algorithm that works by iteratively placing unsorted elements in their correct positions within a sorted portion of the array. This algorithm is often likened to arranging a hand of cards in a card game.

## How Insertion Sort Works

1. **Initialization**: The first element in the array is considered sorted.
2. **Iterative Sorting**:
   - Take an unsorted element and store it separately.
   - Compare the unsorted element with elements in the sorted portion.
   - Place the unsorted element in its suitable position within the sorted portion.
3. **Repeat**: Continue this process until all elements are sorted.

## Example:

Suppose we have an array `[5, 2, 4, 6, 1, 3]` that we want to sort using insertion sort.

### Initial array:
```
[5, 2, 4, 6, 1, 3]
```

1. **First Pass**:
   - The first element, 5, is assumed to be sorted.
   - Take 2 and compare with 5, place it before 5.
     ```
     [2, 5, 4, 6, 1, 3]
     ```
   - The first two elements are now sorted.
   
2. **Second Pass**:
   - Take 4, compare with elements on its left, place it after 2.
     ```
     [2, 4, 5, 6, 1, 3]
     ```
   - The first three elements are now sorted.
   
3. **Third Pass**:
   - Take 6, compare with elements on its left, place it after 5.
     ```
     [2, 4, 5, 6, 1, 3]
     ```
   - The first four elements are now sorted.
   
4. **Fourth Pass**:
   - Take 1, compare with elements on its left, place it before 2.
     ```
     [1, 2, 4, 5, 6, 3]
     ```
   - The first five elements are now sorted.
   
5. **Fifth Pass**:
   - Take 3, compare with elements on its left, place it after 2.
     ```
     [1, 2, 3, 4, 5, 6]
     ```
   - The array is now completely sorted.

## Insertion Sort Algorithm (Pseudocode)

```plaintext
insertionSort(array)
  // mark first element as sorted
  for each unsorted element X
    // extract the element X
    for j <- lastSortedIndex down to 0
      if current element j > X
        move sorted element to the right by 1
    // break loop and insert X here
end insertionSort
```

This pseudocode outlines the steps involved in insertion sort. It iterates through the array, placing each unsorted element in its correct position among the sorted elements.

# Insertion Sort Complexity

Insertion sort is a straightforward sorting algorithm with a time complexity that varies based on the state of the input array.

## Time Complexity

- **Best Case:** \( O(n) \)
- **Worst Case:** \( O(n^2) \)
- **Average Case:** \( O(n^2) \)

### Worst Case Complexity: \( O(n^2) \)

In the worst-case scenario, such as when sorting an array in descending order, each element must be compared with every other element, resulting in approximately \( n^2 \) comparisons.

### Best Case Complexity: \( O(n) \)

The best-case scenario occurs when the array is already sorted. In this case, the outer loop runs \( n \) times, but the inner loop doesn't execute, leading to a linear time complexity.

### Average Case Complexity: \( O(n^2) \)

The average case complexity arises when the array elements are in a random or jumbled order, neither strictly ascending nor descending.

## Space Complexity

The space complexity of insertion sort is \( O(1) \) because it operates in-place, using only a constant amount of additional space regardless of the size of the input array.

## Stability

Insertion sort is stable, meaning it preserves the relative order of equal elements during the sorting process.

## Insertion Sort Applications

Insertion sort is suitable for situations where:

- The array size is small.
- The majority of the array is already sorted or nearly sorted.

# Merge Sort Algorithm

Merge Sort stands out as one of the most widely used sorting algorithms, operating on the principle of Divide and Conquer. This approach involves breaking down a problem into smaller, more manageable sub-problems, solving them individually, and then combining the solutions to achieve the final result.

## Overview of Merge Sort

Merge Sort begins by dividing the array into two equal halves, and this process continues recursively until each sub-array contains only one element, which is inherently sorted. Then, the merge operation kicks in, combining the sorted sub-arrays to create larger sorted arrays until the entire array is sorted.

### Divide and Conquer Strategy

1. **Divide**: Split the array into two halves, typically by finding the midpoint.
2. **Conquer**: Recursively sort each half of the array.
3. **Combine**: Merge the sorted halves to produce the final sorted array.

## Merge Sort Algorithm

The MergeSort function recursively divides the array into halves until each sub-array has only one element. Then, it employs the merge function to merge the sorted sub-arrays into larger sorted arrays.

```plaintext
MergeSort(array, p, r):
    if p < r:
        q = (p + r) / 2
        MergeSort(array, p, q)
        MergeSort(array, q + 1, r)
        Merge(array, p, q, r)
```

To sort the entire array, call `MergeSort(array, 0, length(array) - 1)`.

## The Merge Step

The merge step is crucial in the Merge Sort algorithm. It involves merging two sorted arrays to produce a larger sorted array. The algorithm maintains pointers for both arrays and a current index for the final sorted array, combining elements from both arrays while maintaining the order.

```plaintext
Merge(array, p, q, r):
    // Create duplicate copies of subarrays L ← array[p..q] and M ← array[q+1..r]
    // Maintain indices i, j, and k
    // Compare elements from L and M, placing the smaller one into the main array
    // Copy remaining elements from L and M into the main array
```

## Code Implementation

The merge function works by creating copies of the subarrays to be merged, then systematically comparing elements from both arrays and placing them into the main array in sorted order.

### Example

Let's visualize the merge step with an example:

- Given two sorted subarrays: `[1, 5, 10, 12]` and `[6, 9]`
- We create duplicate copies of these subarrays.
- Using pointers, we compare elements from both arrays and merge them into a single sorted array: `[1, 5, 6, 9, 10, 12]`.

# Merge Sort Complexity

Merge Sort is renowned for its efficient time complexity and stability, making it a popular choice for sorting large datasets.

## Time Complexity

- **Best Case:** \( O(n \log n) \)
- **Worst Case:** \( O(n \log n) \)
- **Average Case:** \( O(n \log n) \)

### Explanation:

- **Best Case Complexity:** \( O(n \log n) \)
  - Even in the best-case scenario where the input array is already sorted, Merge Sort requires \( O(n \log n) \) time due to its divide-and-conquer strategy.

- **Worst Case Complexity:** \( O(n \log n) \)
  - In the worst-case scenario, Merge Sort still performs efficiently with a time complexity of \( O(n \log n) \). This consistency is a significant advantage over other sorting algorithms.

- **Average Case Complexity:** \( O(n \log n) \)
  - The average case time complexity of Merge Sort remains \( O(n \log n) \), making it a reliable choice for a wide range of datasets.

## Space Complexity

Merge Sort has a space complexity of \( O(n) \), primarily due to the additional memory required for creating temporary arrays during the merge step. Despite this space overhead, Merge Sort remains a practical choice for sorting large datasets due to its efficient time complexity.

## Applications

Merge Sort finds applications in various domains, including:

- **Inversion Count Problem:** Determining the number of inversions in an array.
- **External Sorting:** Sorting large datasets that cannot fit entirely into memory.
- **E-commerce Applications:** Sorting product listings, user preferences, and order histories efficiently.

# Quicksort Algorithm

Quicksort is a highly efficient sorting algorithm based on the divide and conquer strategy. It works by selecting a pivot element from the array and partitioning the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The process continues recursively until the entire array is sorted.

## Working of Quicksort Algorithm

1. **Select the Pivot Element**:
   - The rightmost element of the array is often chosen as the pivot element.

2. **Rearrange the Array**:
   - Elements smaller than the pivot are placed to its left, and elements greater than the pivot are placed to its right.

3. **Divide Subarrays**:
   - The array is divided into two subarrays, each with its own pivot element. This process continues recursively until each subarray contains a single element, making them inherently sorted.

## Quicksort Algorithm Pseudocode

```plaintext
quickSort(array, leftmostIndex, rightmostIndex)
  if (leftmostIndex < rightmostIndex)
    pivotIndex <- partition(array, leftmostIndex, rightmostIndex)
    quickSort(array, leftmostIndex, pivotIndex - 1)
    quickSort(array, pivotIndex + 1, rightmostIndex)

partition(array, leftmostIndex, rightmostIndex)
  pivotElement <- array[rightmostIndex]
  storeIndex <- leftmostIndex - 1
  for i <- leftmostIndex to rightmostIndex - 1
    if array[i] < pivotElement
      swap array[i] and array[storeIndex + 1]
      storeIndex++
  swap array[rightmostIndex] and array[storeIndex + 1]
  return storeIndex + 1
```

## Visual Illustration

Quicksort operates by recursively sorting subarrays. The left and right subarrays are sorted independently using the same approach.

- **Sorting the left subarray recursively**:
  ![Sorting the left subarray](left_subarray_sort.png)

- **Sorting the right subarray recursively**:
  ![Sorting the right subarray](right_subarray_sort.png)

## Applications of Quicksort

Quicksort finds application in various scenarios, especially when efficiency is crucial. Some common applications include:

- Sorting large datasets efficiently.
- Implementing data structures like priority queues and associative arrays.
- Partitioning in various algorithms like quick select.

Quicksort's average time complexity of \( O(n \log n) \) makes it a preferred choice for many sorting tasks. Its ability to efficiently handle large datasets and stability in performance across different scenarios contribute to its popularity.
