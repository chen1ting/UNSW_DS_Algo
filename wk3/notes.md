# Sharescreen and Setup

- Debugger
- Git
- Exam Information
- [Leetcode](https://leetcode.com/problem-list/binary-tree/)

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

#### Essential Questions:

1. **Why is QuickSort often preferred over other sorting algorithms in practice?**
   - QuickSort is favored due to its fast average-case time complexity and efficient memory usage, especially with randomized pivot selection.
2. **How does the performance of MergeSort differ from QuickSort in terms of memory usage?**
   - MergeSort generally requires more memory because it uses auxiliary arrays for merging, while QuickSort uses in-place partitioning, resulting in lower memory overhead.
3. **What are the real-life scenarios where Radix Sort is highly beneficial, and why is it suitable for those applications?**
   - Radix Sort is efficient for sorting large datasets with integer or fixed-length string keys, such as ZIP codes or phone numbers, as it performs non-comparative sorting based on digits or characters.

### 2. What sorting algorithm is used by C++, Python, Java?

- **C++ (`std::sort`)**: Uses **Introsort**, a hybrid of **QuickSort, HeapSort, and Insertion Sort**.
- **Python (`sorted()` and `list.sort()`)**: Uses **Timsort**, a hybrid of **MergeSort and Insertion Sort**, optimized for real-world data.
- **Java (`Arrays.sort()`)**:
  - **For primitives**: Uses **Dual-Pivot QuickSort** (Java 7+).
  - **For objects**: Uses **Timsort** (similar to Python).

#### Essential Questions:

1. **Why does C++ use a hybrid of QuickSort, HeapSort, and Insertion Sort (Introsort) for `std::sort`?**
   - C++ uses Introsort to combine the best characteristics of different sorting algorithms: QuickSort for fast average performance, HeapSort for worst-case performance, and Insertion Sort for small subarrays.
2. **What are the specific advantages of Timsort used in Python for real-world data?**
   - Timsort adapts to real-world data by combining MergeSort’s divide-and-conquer approach with Insertion Sort’s efficiency for small datasets. It is optimized for sorting partially sorted data, which is common in real applications.
3. **How does Dual-Pivot QuickSort in Java improve performance over traditional QuickSort?**
   - Dual-Pivot QuickSort uses two pivot elements instead of one, which can partition the data more effectively, reducing the number of comparisons and improving performance over traditional QuickSort.

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

#### Essential Questions:

1. **What are the main benefits of using ADTs in software development?**
   - ADTs allow for abstraction, hiding implementation details and exposing only the necessary operations, which promotes cleaner, more maintainable, and reusable code.
2. **How do ADTs improve the modularity and maintainability of code?**
   - By separating the implementation from the interface, ADTs enable easier changes to the underlying data structure without affecting the code that uses them.
3. **Why is the stack ADT useful in function calls and recursion?**
   - The stack is essential for managing function calls and recursion because it follows a Last-In-First-Out (LIFO) order, which aligns with the nature of recursive function calls.

---

### [Visualization & Time Complexity](https://www.bigocheatsheet.com/)

| Operation | Access (Linked List / Array)          | Search (Linked List / Array)          | Insert (Linked List / Array)          | Delete (Linked List / Array)             |
| --------- | ------------------------------------- | ------------------------------------- | ------------------------------------- | ---------------------------------------- |
| **Stack** | $ O(n) $ / $ O(1) $                   | $ O(n) $ / $ O(n) $                   | $ O(1) $ / $ O(1) $ (push at end)     | $ O(1) $ / $ O(1) $ (pop from end)       |
| **Queue** | $ O(n) $ / $ O(1) $                   | $ O(n) $ / $ O(n) $                   | $ O(1) $ / $ O(1) $ (enqueue at end)  | $ O(1) $ / $ O(1) $ (dequeue from front) |
| **Set**   | $ O(1) $ (hash) / $ O(\log n) $ (BST) | $ O(1) $ (hash) / $ O(\log n) $ (BST) | $ O(1) $ (hash) / $ O(\log n) $ (BST) | $ O(1) $ (hash) / $ O(\log n) $ (BST)    |

#### Essential Questions:

1. **How do time complexities differ for accessing, inserting, and deleting elements in stacks and queues implemented with arrays versus linked lists?**
   - Arrays offer constant-time insertion and deletion at the end, while linked lists provide constant-time operations for both insertions and deletions at either end. Access and search are typically slower in linked lists.
2. **Why are hash-based sets generally faster than binary search tree-based sets for common operations?**
   - Hash-based sets provide constant-time access, search, insert, and delete operations, whereas BST-based sets rely on logarithmic time, making hash-based sets more efficient for most use cases.
3. **What are the space complexities of different ADT implementations, and how do they affect performance?**
   - Linked list implementations generally have higher memory overhead due to the need for pointers, while array-based implementations are more memory-efficient but can suffer from resizing costs.

---

### Real-life Usage

| Data Structure | Python Implementation                                  | C Implementation                                         |
| -------------- | ------------------------------------------------------ | -------------------------------------------------------- |
| **Stack**      | `list` (using `append()` and `pop()`)                  | Array or linked list (using `push()` and `pop()`)        |
| **Queue**      | `collections.deque` (using `append()` and `popleft()`) | Array or linked list (using `enqueue()` and `dequeue()`) |
| **Set**        | `set` (implemented using a hash table)                 | Hash table or binary search tree                         |

#### Essential Questions:

1. **What are some of the advantages of using Python’s `collections.deque` over a list for queue operations?**
   - `collections.deque` provides efficient append and pop operations from both ends, whereas a list’s operations can be slower for queue use cases as elements are added or removed from the front.
2. **How does C’s implementation of stacks using arrays or linked lists compare to Python’s `list` implementation for stack operations?**
   - C’s stack implementation typically requires manual memory management, whereas Python’s `list` is a dynamic array that automatically resizes and supports stack operations natively.
3. **In which scenarios would a set implemented using a binary search tree be more beneficial than one using a hash table?**
   - A BST-based set offers ordered traversal and logarithmic time complexity for operations, which is beneficial when ordering is important, such as range queries.

---

# Binary Search Tree (BST)

## [Visualization & Time Complexity](https://visualgo.net/en/bst)

| Operation | Description (Pseudo Code)                               | Time Complexity                                  |
| --------- | ------------------------------------------------------- | ------------------------------------------------ |
| Access    | In BST, access is not direct. Traverse the tree.        | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |
| Search    | Compare key with root, recursively traverse left/right. | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |
| Insert    | Traverse the tree, insert at correct position.          | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |
| Delete    | Find node, adjust pointers, rebalance if needed.        | $ O(\log n) $ (balanced) / $ O(n) $ (unbalanced) |

#### Essential Questions:

1. **Why is it important for a BST to remain balanced for optimal performance?**
   - A balanced BST ensures that operations like access, search, and insertion have logarithmic time complexity. An unbalanced BST could degrade to linear time complexity, making it inefficient.
2. **How does the time complexity of accessing or searching a BST change if it is unbalanced?**
   - In an unbalanced BST, the time complexity can degrade to $O(n)$, similar to a linked list, because the tree might form a linear structure.
3. **What steps are involved in deleting a node from a BST, and how does rebalancing affect performance?**
   - Deleting a node involves finding the node, adjusting the pointers of its parent, and potentially rebalancing the tree to maintain optimal search performance. Rebalancing may involve rotations, which add extra computation.

---

# Course Materials from NTU

---

# Sharescreen
