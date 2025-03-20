# 复习

## Abstract Data Type

### Abstraction

1. 什么是 abstraction？  
   **抽象（Abstraction）** 是指忽略掉不重要的细节，仅关注问题的核心特征和功能，以便更高效地处理复杂系统。
   - **生活中的例子**：驾驶汽车时，司机只需使用方向盘、油门和刹车，而不需要了解发动机的内部工作原理。
   - **计算机里的例子**：使用 `printf()` 进行输出时，程序员不需要知道它在底层如何与 I/O 设备交互，只需要调用该函数并传入格式化字符串即可。

### Abstract Data Types (ADTs)

1. 什么是 data structure？  
   **数据结构（Data Structure）** 是数据的特定排列方式。

2. 为什么我们需要 data structure？  
   **我们需要数据结构是因为不同的数据排列方式会影响操作的效率。**

   - 每种数据结构都有其适用的场景，使某些操作更高效，而另一些操作可能较低效。
   - **解决特定问题的关键是选择合适的算法和数据结构**。

3. 什么是 ADT（抽象数据类型）？  
   **抽象数据类型（ADT, Abstract Data Type）是根据其行为（可执行的操作）而定义的数据类型，而不是基于其具体实现。**

   - **与 C 语言中的“原始”或“内建”数据类型（如 `int`、`float`、`double`、`char`）对比**：原始数据类型有特定的存储和操作方式，而 ADT 仅定义接口，具体实现可以不同。
   - **ADT 关注数据的行为，而不是具体实现**。
   - 例如，**栈（Stack）** 数据结构允许你向顶部“推入”数据（push），但不会暴露底层的存储方式（数组或链表）。

4. 理解一个 ADT 的时候要问的核心问题是什么？

   - **我们要实现什么核心功能**
   - **为了实现这个功能，需要哪些操作**

5. 哪些是常见的 ADT？
   - **链表（Linked List）**
   - **栈（Stack）**
   - **队列（Queue）**
   - **集合（Set）**
   - **多重集合（Multiset）**
   - **映射（Map）**
   - **图（Graph）**
   - **优先队列（Priority Queue）**

### Queues & Stacks

1. Queue 和 Stack 的核心功能是什么（他们适合解决什么问题）？他们的核心区别是什么？

   - **Queue（队列）**：遵循 **FIFO（先进先出）** 规则，适用于**任务调度、消息传递、广度优先搜索（BFS）**
   - **Stack（栈）**：遵循 **LIFO（后进先出）** 规则，适用于**函数调用栈、表达式求值、深度优先搜索（DFS）**
   - **核心区别**：Queue 是 **FIFO**（先入先出），Stack 是 **LIFO**（后进先出）。

2. 为了实现这些功能，Queue 和 Stack 需要哪些操作（Operations/Functions）？

   - **Queue（队列）**

     - `enqueue(value)`: 将元素加入队列尾部
     - `dequeue()`: 移除并返回队列头部的元素
     - `peek()`: 返回队列头部的元素但不删除
     - `isEmpty()`: 检查队列是否为空

   - **Stack（栈）**
     - `push(value)`: 将元素压入栈顶
     - `pop()`: 移除并返回栈顶的元素
     - `peek()`: 返回栈顶元素但不删除
     - `isEmpty()`: 检查栈是否为空

3. 用链表(linked list)和数组(array)如何实现这四个基本功能？给出 Pseudo code

   - **Queue (队列) - 使用链表实现**

     ```pseudo
     class Queue:
         Node front, back
         int size = 0

         function enqueue(value):
             Node newNode = new Node(value)
             if back == null:
                 front = back = newNode
             else:
                 back.next = newNode
                 back = newNode
             size += 1

         function dequeue():
             if front == null:
                 return null
             value = front.value
             front = front.next
             if front == null:
                 back = null
             size -= 1
             return value
     ```

   - **Queue (队列) - 使用数组实现**

     ```pseudo
     class Queue:
         array data
         int front = 0, back = 0, size = 0

         function enqueue(value):
             if size == data.length:
                 resize()  # 扩展数组大小
             data[back] = value
             back = (back + 1) % data.length
             size += 1

         function dequeue():
             if size == 0:
                 return null
             value = data[front]
             front = (front + 1) % data.length
             size -= 1
             return value
     ```

   - **Stack (栈) - 使用链表实现**

     ```pseudo
     class Stack:
         Node top

         function push(value):
             Node newNode = new Node(value)
             newNode.next = top
             top = newNode

         function pop():
             if top == null:
                 return null
             value = top.value
             top = top.next
             return value
     ```

   - **Stack (栈) - 使用数组实现**

     ```pseudo
     class Stack:
         array data
         int top = -1

         function push(value):
             if top == data.length - 1:
                 resize()  # 扩展数组大小
             top += 1
             data[top] = value

         function pop():
             if top == -1:
                 return null
             value = data[top]
             top -= 1
             return value
     ```

4. 4+2 个操作的时间复杂度是什么？分别用链表(linked list)和数组(array)

   | 操作         | Stack (链表) | Stack (数组) | Queue (链表) | Queue (数组) |
   | ------------ | ------------ | ------------ | ------------ | ------------ |
   | push/enqueue | O(1)         | O(1) (均摊)  | O(1)         | O(1) (均摊)  |
   | pop/dequeue  | O(1)         | O(1)         | O(1)         | O(1)         |
   | peek         | O(1)         | O(1)         | O(1)         | O(1)         |
   | isEmpty      | O(1)         | O(1)         | O(1)         | O(1)         |
   | access       | O(n)         | O(1)         | O(n)         | O(1)         |
   | search       | O(n)         | O(n)         | O(n)         | O(n)         |

### Sets

1. Set 的核心功能是什么（适合解决什么问题）？
   - **集合（Set）** 是一种存储 **唯一元素** 的数据结构。
   - 适用于**快速查找、去重、集合运算（如交集、并集、差集）** 等场景，例如：
     - 统计唯一用户 ID
     - 处理无重复关键字的数据
     - 计算两个集合的交集或并集
2. 为了实现这些功能，Set 需要哪些操作（Operations/Functions）？

```c
#include <stdbool.h>
typedef struct set *Set;
/** Creates a new empty set */
Set SetNew(void);
/** Free memory used by set */
void SetFree(Set set);
/** Inserts an item into the set */
void SetInsert(Set set, int item);
/** Deletes an item from the set */
void SetDelete(Set set, int item);
/** Checks if an item is in the set */
bool SetContains(Set set, int item);
/** Returns the size of the set */
int SetSize(Set set);
/** Displays the set */
void SetShow(Set set);
```

3. 用 ordered array、unordered array、ordered linked list 如何实现这些基本功能？给出 Pseudo code

   - **Ordered Array (有序数组)**

     ```pseudo
     class OrderedArraySet:
         array data
         int size = 0

         function SetInsert(item):
             if SetContains(item):
                 return
             index = findInsertPosition(item)
             shiftRightFrom(index)
             data[index] = item
             size += 1

         function SetDelete(item):
             index = binarySearch(item)
             if index == -1:
                 return
             shiftLeftFrom(index)
             size -= 1

         function SetContains(item):
             return binarySearch(item) != -1
     ```

   - **Unordered Array (无序数组)**

     ```pseudo
     class UnorderedArraySet:
         array data
         int size = 0

         function SetInsert(item):
             if SetContains(item):
                 return
             data[size] = item
             size += 1

         function SetDelete(item):
             index = linearSearch(item)
             if index == -1:
                 return
             data[index] = data[size - 1]  # 覆盖删除
             size -= 1

         function SetContains(item):
             return linearSearch(item) != -1
     ```

   - **Ordered Linked List (有序链表)**

     ```pseudo
     class OrderedLinkedListSet:
         Node head
         int size = 0

         function SetInsert(item):
             if SetContains(item):
                 return
             prev, curr = findInsertPosition(item)
             newNode = new Node(item)
             newNode.next = curr
             if prev == null:
                 head = newNode
             else:
                 prev.next = newNode
             size += 1

         function SetDelete(item):
             prev, curr = findNode(item)
             if curr == null:
                 return
             if prev == null:
                 head = curr.next
             else:
                 prev.next = curr.next
             size -= 1

         function SetContains(item):
             return findNode(item) != null
     ```

4. 时间复杂度？

   | 操作     | Ordered Array          | Unordered Array              | Ordered Linked List |
   | -------- | ---------------------- | ---------------------------- | ------------------- |
   | Insert   | O(n) (二分查找 + 插入) | O(1)                         | O(n) (查找插入位置) |
   | Delete   | O(n) (二分查找 + 移动) | O(n) (查找 O(n) + 覆盖 O(1)) | O(n)                |
   | Contains | O(log n) (二分查找)    | O(n) (线性查找)              | O(n)                |
   | SetSize  | O(1)                   | O(1)                         | O(1)                |
   | SetShow  | O(n)                   | O(n)                         | O(n)                |

### 总结：你的学习目标

- 解释栈/队列/集合数据结构的运作方式
- 使用链表/数组实现栈/队列
- 在合适的问题场景下选择栈/队列/集合数据结构

  以下问题应该使用哪种数据结构来解决？

  - **反转字符串**：栈。栈的后进先出（LIFO）特性非常适合用于反转字符串。
  - **打印机驱动程序**：队列。打印任务通常是先进先出（FIFO）处理的，因此使用队列来存储和处理打印任务非常合适。
  - **检测括号匹配（如 `()[]{}` 是否有效）**：栈。栈用于匹配括号，保证每一个打开的括号都能正确地匹配到关闭括号。
  - **任务调度（如 CPU 进程调度）**：队列。队列的先进先出（FIFO）特性适合任务调度，特别是非抢占式调度。
  - **计算两个列表的交集**：集合。集合用于去除重复元素并进行交集操作，能够高效地找到两个集合的共同元素。
  - **记录访问过的网页链接**：栈。浏览器的前进和后退功能通常使用栈来记录访问过的网页，以便在用户点击“后退”时能够返回上一个页面。
  - **实现浏览器的前进和后退功能**：栈。栈非常适合用来实现浏览器的历史记录管理，其中前进和后退的操作可以通过栈的弹出和压入来实现。
  - **处理银行排队系统**：队列。银行的排队系统通常是先进先出（FIFO），因此队列是理想的选择。
  - **统计唯一访问用户 ID**：集合。集合的特性确保所有元素都是唯一的，非常适合用于统计唯一的用户 ID。
  - **解析数学表达式（如 `3 + (4 * 5) - 6`）**：栈。栈非常适合用来解析数学表达式，尤其是在涉及括号和运算符优先级时。

# 本周内容

## Tree

0. 什么是 Root 和 Leaf？

   - **Root（根节点）**：树的最上层节点，没有父节点。
   - **Leaf（叶子节点）**：没有子节点的节点，位于树的最底层。

1. 为什么我们需要 Tree？

   - 树是一种非常有效的层次化数据结构，可以表示具有层次关系的数据，如文件系统、家族树、组织结构等。
   - 树使得查找、插入、删除等操作更加高效，尤其是在 **二叉树** 和 **平衡树** 中，能够优化搜索和排序的效率。

2. 什么是 Binary Tree?

   - **Binary Tree（二叉树）** 是一种每个节点最多有两个子节点的数据结构。每个节点有两个子节点，通常分别称为 **left**（左子节点）和 **right**（右子节点）。

3. 最最最基本的 Binary Tree Node 是怎么 define 的？（用 C 语言）

   ```c
   typedef struct Node {
       int data;               // 节点存储的数据
       struct Node* left;      // 指向左子节点的指针
       struct Node* right;     // 指向右子节点的指针
   } Node;
   ```

4. Tree Traversal 的 Code Template 是什么？（用 C 语言）

```c
void preOrder(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);  // 访问根节点
    preOrder(root->left);       // 递归遍历左子树
    preOrder(root->right);      // 递归遍历右子树
}

void inOrder(Node* root) {
    if (root == NULL) return;
    inOrder(root->left);        // 递归遍历左子树
    printf("%d ", root->data);  // 访问根节点
    inOrder(root->right);       // 递归遍历右子树
}

void postOrder(Node* root) {
    if (root == NULL) return;
    postOrder(root->left);      // 递归遍历左子树
    postOrder(root->right);     // 递归遍历右子树
    printf("%d ", root->data);  // 访问根节点
}

```

5. 有哪三种不同的 Traversal Order？他们是什么意思？通常的应用场景是什么？
   - Pre-order Traversal（先序遍历）
     - 访问根节点，然后递归访问左子树，再递归访问右子树。
     - 应用场景：常用于表达式树的前序遍历、复制树等操作。
   - In-order Traversal（中序遍历）
     - 递归访问左子树，访问根节点，然后递归访问右子树。
     - 应用场景：用于二叉搜索树（BST）的遍历，输出的顺序是有序的。
   - Post-order Traversal（后序遍历）
     - 递归访问左子树，递归访问右子树，然后访问根节点。
     - 应用场景：常用于删除树结构、计算树的大小等操作。
   - 除了树的操作外，这些遍历方法也可以用于其他类型的数据结构，如图的遍历等。

## Binary Search Tree

1. 说出以下操作的 pseudo code：

   - **Insert**

     ```c
     void insert(Node* root, int value) {
         if (root == NULL) {
             root = createNode(value);
         } else if (value < root->data) {
             insert(root->left, value);
         } else {
             insert(root->right, value);
         }
     }
     ```

   - **Search**

     ```c
     Node* search(Node* root, int value) {
         if (root == NULL || root->data == value)
             return root;
         if (value < root->data)
             return search(root->left, value);
         return search(root->right, value);
     }
     ```

   - **Join (Given two BSTs t1 and t2, where max(t1) < min(t2))**

     ```c
     Node* findMin(Node* root) {
         while (root->left != NULL) root = root->left;
         return root;
     }

     Node* join(Node* t1, Node* t2) {
         if (t1 == NULL) return t2;
         if (t2 == NULL) return t1;

         Node* minNode = findMin(t2);
         t1 = insert(t1, minNode->data); // Insert min of t2 as root to t1
         t1->right = join(t1->right, t2); // Merge right side of t1 with t2
         return t1;
     }
     ```

   - **Delete**

     ```c
     Node* delete(Node* root, int value) {
         if (root == NULL) return root;
         if (value < root->data) {
             root->left = delete(root->left, value);
         } else if (value > root->data) {
             root->right = delete(root->right, value);
         } else {
             if (root->left == NULL && root->right == NULL) {
                 free(root);
                 return NULL;
             } else if (root->left == NULL) {
                 Node* temp = root->right;
                 free(root);
                 return temp;
             } else if (root->right == NULL) {
                 Node* temp = root->left;
                 free(root);
                 return temp;
             } else {
                 Node* temp = findMin(root->right);
                 root->data = temp->data;
                 root->right = delete(root->right, temp->data);
             }
         }
         return root;
     }
     ```

   - **Free**

     ```c
     void freeTree(Node* root) {
         if (root == NULL) return;
         freeTree(root->left);
         freeTree(root->right);
         free(root);
     }
     ```

   - **Size**

     ```c
     int size(Node* root) {
         if (root == NULL) return 0;
         return 1 + size(root->left) + size(root->right);
     }
     ```

   - **Height**

     ```c
     int height(Node* root) {
         if (root == NULL) return -1;
         int leftHeight = height(root->left);
         int rightHeight = height(root->right);
         return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
     }
     ```

   - **Prune**
     ```c
     void prune(Node* root, int value) {
         if (root == NULL) return;
         if (root->data < value) {
             root->left = NULL;
             prune(root->right, value);
         } else if (root->data > value) {
             root->right = NULL;
             prune(root->left, value);
         } else {
             prune(root->left, value);
             prune(root->right, value);
         }
     }
     ```

2. 说出以上操作的时间复杂度（Average 和 Worst 分别是什么）？

| 操作       | 平均时间复杂度 (Average) | 最坏时间复杂度 (Worst) |
| ---------- | ------------------------ | ---------------------- |
| **Insert** | O(h)                     | O(h)                   |
| **Search** | O(h)                     | O(h)                   |
| **Join**   | O(h)                     | O(n)                   |
| **Delete** | O(h)                     | O(h)                   |
| **Free**   | O(n)                     | O(n)                   |
| **Size**   | O(n)                     | O(n)                   |
| **Height** | O(h)                     | O(h)                   |
| **Prune**  | O(n)                     | O(n)                   |

_其中 h 表示树的高度，n 表示节点数。_

3.  为什么需要 rebalancing？

    - Rebalancing is required to maintain optimal performance for operations like insert, search, and delete. If the tree becomes unbalanced (e.g., a degenerate tree resembling a linked list), the time complexity of these operations can degrade to O(n). Rebalancing ensures that the height of the tree is kept logarithmic, maintaining efficient performance.

4.  有哪两个衡量 balance 的指标？分别是什么意思？哪个更严格？

    - **Height Balance**：a height-balanced tree has,
      for every node,
      |height (l) − height (r)| ≤ 1
    - **Size Balance**：a size-balanced tree has,
      for every node,
      |size (l) − size (r)| ≤ 1 (更严格)

5.  说出以下操作的 pseudo code：

    - **Left/Right Rotation**

      ```c
         struct node *rotateRight(struct node *root) {
             if (root == NULL || root->left == NULL) return root;
             struct node *newRoot = root->left;
             root->left = newRoot->right;
             newRoot->right = root;
             return newRoot;
         }

         struct node *rotateLeft(struct node *root) {
             if (root == NULL || root->right == NULL) return root;
             struct node *newRoot = root->right;
             root->right = newRoot->left;
             newRoot->left = root;
             return newRoot;
         }
      ```

    - **Partition**

      ```pseudo
         partition(t, i):
             Input: tree t, index i
             Output: tree with i-th item moved to root

             leftSize = size(t->left)
             if i < leftSize:
             t->left = partition(t->left, i)
             t = rotateRight(t)
             else if i > leftSize:
             t->right = partition(t->right, i - leftSize - 1)
             t = rotateLeft(t)
             return t
      ```

6.  有哪些 Balance 的方法？（分类讲）
    - Global
    - Local
      - root insertion
      - randomised insertion
7.  以上 Balance 方法的 pseudo code：

    - Rebalance

      ```pseudo
          rebalance(t):
              Input: tree t
              Output: rebalanced t

              if size(t) < 3:
              return t
              t = partition(t, size(t) / 2)
              t->left = rebalance(t->left)
              t->right = rebalance(t->right)
              return t
      ```

    - Root Insertion

      ```pseudo
         insertAtRoot(t, v):
             Input: tree t, value v
             Output: t with v inserted at the root

             if t is empty:
             return new node containing v
             else if v < t->item:
             t->left = insertAtRoot(t->left, v)
             t = rotateRight(t)
             else if v > t->item:
             t->right = insertAtRoot(t->right, v)
             t = rotateLeft(t)
             return t
      ```

    - Random Insertion

      ```pseudo
         insertRandom(t, v):
             Input: tree t, value v
             Output: t with v inserted

             if t is empty:
             return new node containing v
             // p/q chance of inserting at root
             if random() mod q < p:
             return insertAtRoot(t, v)
             else:
             return insertAtLeaf(t, v)
      ```

      Note: random() is a pseudo-random number generator, 30% chance of root insertion ⇒ choose p = 3, q = 10

## AVL Tree

0. 为什么叫 AVL tree？
1. AVL tree 的特点是什么？
2. 以下操作的 Pseudocode
   - Rebalance
   - Insertion
   - Search
   - Deletion

## Graph

### Fundamentals

1. 为什么需要 Graphs?
2. Graph 的核心组成部分是什么？
3. 有哪些类型的 Graph?
4. 解释以下 terminology 的意思：
   - edge
     - incident
   - node
     - adjacent
     - degree
   - path
     - simple
     - cycle
   - graph
     - dense
     - sparse
     - complete
     - connected
     - tree
   - subgraph
     - connected component
     - spanning tree
     - spanning forest
     - clique

### Graph ADT

1. What do we need to represent?
2. What operations do we need to support?

### Implementations

1. 有哪三种常见的 graph representation? 写出这三种 graph implementation 之下的 graph definition
2. 不同 representation 下操作的复杂度？
