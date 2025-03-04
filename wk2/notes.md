# Sorting

## Elementary Sorts

| Algorithm          | Description                                        | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Stable | Adaptive |
| ------------------ | -------------------------------------------------- | -------------------- | ----------------------- | --------------------- | ------ | -------- |
| **Selection Sort** | 在未排序部分中找到最小的东西，放到已排序的最后一位 | $O(n^2)$             | $O(n^2)$                | $O(n^2)$              | No     | No       |
| **Bubble Sort**    | 遍历列表，交换错序的 pair，直到没有错序            | $O(n)$               | $O(n^2)$                | $O(n^2)$              | Yes    | Yes      |
| **Insertion Sort** | 遍历未排序部分，把每个东西插入已排序部分的正确位置 | $O(n)$               | $O(n^2)$                | $O(n^2)$              | Yes    | Yes      |

| Algorithm          | Description                                                                                         | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Stable | Adaptive |
| ------------------ | --------------------------------------------------------------------------------------------------- | -------------------- | ----------------------- | --------------------- | ------ | -------- |
| **Selection Sort** | Selects the minimum element from the unsorted part and swaps it with the leftmost unsorted element. | $O(n^2)$             | $O(n^2)$                | $O(n^2)$              | No     | No       |
| **Bubble Sort**    | Swaps adjacent elements if they are in the wrong order.                                             | $O(n)$               | $O(n^2)$                | $O(n^2)$              | Yes    | Yes      |
| **Insertion Sort** | Insert each new element of into its correct position within the already sorted portion.             | $O(n)$               | $O(n^2)$                | $O(n^2)$              | Yes    | Yes      |

## Divide and Conquer

| Algorithm      | Description                                                 | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Stable | Adaptive |
| -------------- | ----------------------------------------------------------- | -------------------- | ----------------------- | --------------------- | ------ | -------- |
| **Merge Sort** | recursively 把一个队列对半分，然后 merge 回一个 sorted 队列 | $O(n \log n)$        | $O(n \log n)$           | $O(n \log n)$         | Yes    | No       |
| **Quick Sort** |                                                             | $O(n \log n)$        | $O(n \log n)$           | $O(n^2)$              | No     | No       |

| Algorithm      | Description                                                                               | Best Time Complexity | Average Time Complexity | Worst Time Complexity | Stable | Adaptive |
| -------------- | ----------------------------------------------------------------------------------------- | -------------------- | ----------------------- | --------------------- | ------ | -------- |
| **Merge Sort** | Recursively splits the array in half, sorts each half, and then merges the sorted halves. | $O(n \log n)$        | $O(n \log n)$           | $O(n \log n)$         | Yes    | No       |
| **Quick Sort** | Selects a pivot and partitions the array around it, recursively sorting the subarrays.    | $O(n \log n)$        | $O(n \log n)$           | $O(n^2)$              | No     | No       |

## Radix
