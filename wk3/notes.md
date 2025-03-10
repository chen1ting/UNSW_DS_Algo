# Sharescreen and Setup

- Debugger
- Git
- Exam Information

---

# 复习：Sorting

- Tutorial & Lab & Quiz 3

## Modern Sorting Applications

| Sorting Algorithm | Motivation                                      | Real-Life Usage                                                      | Suitable Data Size   |
| ----------------- | ----------------------------------------------- | -------------------------------------------------------------------- | -------------------- |
| Selection Sort    | Simple, easy to implement                       | Teaching basic sorting concepts                                      | Small                |
| Insertion Sort    | Efficient for nearly sorted data                | Online transaction processing, small datasets                        | Small to medium      |
| Bubble Sort       | Conceptually simple but inefficient             | Rarely used in practice due to inefficiency                          | Small                |
| MergeSort         | Stable, guaranteed $O(n \log n)$ complexity     | External sorting (e.g., large datasets on disk), parallel processing | Large                |
| QuickSort         | Fast in practice, good average-case performance | General-purpose sorting, database query optimizations                | Medium to large      |
| Radix Sort        | Non-comparative, efficient for integers/strings | Sorting ZIP codes, phone numbers, or fixed-length strings            | Large (integer keys) |

### 1. Why QuickSort?

- QuickSort is preferred because of its **fast average-case time complexity** of $O(n \log n)$.
- It **performs well in practice**, especially with **randomized pivot selection** to avoid worst-case $O(n^2)$.
- It is **cache-efficient** and often outperforms MergeSort due to lower memory overhead.
- Used in many **real-world applications**, including database indexing and library sorting functions.

### 2. What sorting algorithm is used by C++, Python, Java?

- **C++ (`std::sort`)**: Uses **Introsort**, a hybrid of **QuickSort, HeapSort, and Insertion Sort**.
- **Python (`sorted()` and `list.sort()`)**: Uses **Timsort**, a hybrid of **MergeSort and Insertion Sort**, optimized for real-world data.
- **Java (`Arrays.sort()`)**:
  - **For primitives**: Uses **Dual-Pivot QuickSort** (Java 7+).
  - **For objects**: Uses **Timsort** (similar to Python).

---

[Sorting Algorithm Cheat Sheet](https://www.interviewcake.com/sorting-algorithm-cheat-sheet)

---

# Abstract Data Type (ADT)

## Why do we need ADT?

Abstract Data Types (ADTs) provide a structured way to manage data, encapsulating the implementation details while exposing only necessary operations. This leads to modular, reusable, and maintainable code.

### Example Usage | Modern Library Usage

| ADT   | Example Usage                                            | Modern Library Equivalent                                        |
| ----- | -------------------------------------------------------- | ---------------------------------------------------------------- |
| Stack | Function calls (recursion), undo feature in text editors | `std::stack` (C++), `Stack` (Java), `collections.deque` (Python) |
| Queue | Print job scheduling, process management                 | `std::queue` (C++), `Queue` (Java), `queue.Queue` (Python)       |
| Set   | Unique word counting, hash-based lookups                 | `std::set` (C++), `Set` (Java), `set` (Python)                   |

## Visualization & Time Complexity

[Big-O Complexity Cheat Sheet](https://www.bigocheatsheet.com/)

| Operation | Access (Linked List / Array)          | Search (Linked List / Array)          | Insert (Linked List / Array)          | Delete (Linked List / Array)             |
| --------- | ------------------------------------- | ------------------------------------- | ------------------------------------- | ---------------------------------------- |
| **Stack** | $ O(n) $ / $ O(1) $                   | $ O(n) $ / $ O(n) $                   | $ O(1) $ / $ O(1) $ (push at end)     | $ O(1) $ / $ O(1) $ (pop from end)       |
| **Queue** | $ O(n) $ / $ O(1) $                   | $ O(n) $ / $ O(n) $                   | $ O(1) $ / $ O(1) $ (enqueue at end)  | $ O(1) $ / $ O(1) $ (dequeue from front) |
| **Set**   | $ O(1) $ (hash) / $ O(\log n) $ (BST) | $ O(1) $ (hash) / $ O(\log n) $ (BST) | $ O(1) $ (hash) / $ O(\log n) $ (BST) | $ O(1) $ (hash) / $ O(\log n) $ (BST)    |

## Reallife usage

| Data Structure | Python Implementation                                  | C Implementation                                         |
| -------------- | ------------------------------------------------------ | -------------------------------------------------------- |
| **Stack**      | `list` (using `append()` and `pop()`)                  | Array or linked list (using `push()` and `pop()`)        |
| **Queue**      | `collections.deque` (using `append()` and `popleft()`) | Array or linked list (using `enqueue()` and `dequeue()`) |
| **Set**        | `set` (implemented using a hash table)                 | Hash table or binary search tree                         |

# Binary Search Tree (BST)

## Visualization & Time Complexity

| Operation | Description (Pseudo Code)                               | Time Complexity                                  |
| --------- | ------------------------------------------------------- | ------------------------------------------------ |
| Access    | In BST, access is not direct. Traverse the tree.        | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |
| Search    | Compare key with root, recursively traverse left/right. | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |
| Insert    | Traverse the tree, insert at correct position.          | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |
| Delete    | Find node, adjust pointers, rebalance if needed.        | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |

---

# Course Materials from NTU

---

# Sharescreen
