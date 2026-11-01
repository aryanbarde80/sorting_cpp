# Sorting Algorithms in C++

A collection of sorting algorithms implemented in C++, covering fundamental sorting techniques, their working principles, implementations, complexity analysis, and related problem-solving patterns.

## Contents

### 1. Sorting Fundamentals
- Introduction to sorting algorithms
- Time and space complexity
- Best, average, and worst-case analysis
- Stable and unstable sorting
- In-place and out-of-place sorting
- Adaptive and non-adaptive sorting
- Comparison-based and non-comparison-based sorting

### 2. Bubble Sort
- Algorithm and implementation
- Optimized Bubble Sort
- Time and space complexity
- Stability and adaptiveness

### 3. Selection Sort
- Algorithm and implementation
- Minimum element selection
- Time and space complexity
- Stability and swap analysis

### 4. Insertion Sort
- Algorithm and implementation
- Element shifting and insertion
- Time and space complexity
- Performance on nearly sorted arrays

### 5. Merge Sort
- Divide-and-conquer approach
- Merging sorted arrays
- Recursive implementation
- Time and space complexity
- Stability
- Related LeetCode problems

### 6. Quick Sort
- Partitioning
- Pivot selection strategies
- Recursive implementation
- Time and space complexity
- Worst-case scenarios
- Related concepts and problems

### 7. Counting Sort
- Frequency counting
- Sorting within a limited value range
- Stable Counting Sort implementation
- Time and space complexity
- Limitations

### 8. Radix Sort
- Digit-by-digit sorting
- Least Significant Digit (LSD) approach
- Stable sorting as a requirement
- Time and space complexity
- Limitations and use cases

### 9. Bucket Sort
- Bucket creation and distribution
- Sorting individual buckets
- Combining sorted buckets
- Expected and worst-case complexity
- Use cases and limitations

### 10. Heap Sort
- Heap fundamentals
- Max-heap construction
- Heapify operation
- Sorting using a heap
- Time and space complexity
- In-place sorting and stability

### 11. C++ STL Sorting
- `sort()`
- `stable_sort()`
- Sorting arrays and vectors
- Ascending and descending order
- Custom comparators
- Lambda expressions
- Sorting objects and pairs

### 12. LeetCode Practice
- Problems involving sorting
- Sorting-based problem-solving patterns
- Custom sorting and comparators
- Problems combining sorting with other DSA concepts

## Repository Structure

```text
sorting_cpp/
├── README.md
├── bubblesort.cpp
├── selectionsort.cpp
├── insertionsort.cpp
├── mergesort.cpp
├── quicksort.cpp
├── coutingsort.cpp
├── radixsort.cpp
├── bucketsort.cpp
├── heapsort.cpp
├── sort_stl.cpp
├── stable_sort_stl.cpp
├── custom_comparators_stl.cpp
├── lambda_function_as_comparator.cpp
└── leetcode/
    ├── 0075_sort_colors.cpp
    ├── 0088_merge_sorted_array.cpp
    ├── 0056_merge_intervals.cpp
    ├── 0057_insert_interval.cpp
    ├── 0148_sort_list.cpp
    ├── 0179_largest_number.cpp
    ├── 0215_kth_largest_element.cpp
    ├── 0452_min_arrows_burst_balloons.cpp
    ├── 0912_sort_an_array.cpp
    └── 0973_k_closest_points_to_origin.cpp
