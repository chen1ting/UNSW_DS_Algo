# 复习

## Abstract Data Type

### Abstraction

1. 什么是 abstraction？举出一个生活中的例子和计算机里的例子

### Abstract Data Types (ADTs)

1. 什么是 data structure？
2. 为什么我们需要 data stracture？
3. 什么是 ADT?
4. 理解一个 ADT 的时候要问的核心问题是什么？
5. 哪些是常见的 ADT?

### Queues & Stacks

1. Queue 和 Stack 的核心功能是什么（他们适合解决什么问题）？他们的核心区别是什么？
2. 为了实现这些功能，Queue 和 Stack 需要哪些操作（Operations/Functions）？
3. 用链表(linked list)和队列(array)如何实现这四个基本功能？给出 Pseudo code
4. 4+2 个操作的时间复杂度是什么？分别用链表(linked list)和队列(array)

### Sets

1. Set 的核心功能是什么（适合解决什么问题）？
2. 为了实现这些功能，Set 需要哪些操作（Operations/Functions）？
3. 用 ordered array、unordered array、ordered linked list 如何实现这些基本功能？给出 Pseudo code
4. 时间复杂度？

### In Summary, your learning Objectives:

- 解释栈/队列/集合数据结构的运作方式
- 使用链表/数组实现栈/队列
- 在合适的问题场景下选择栈/队列/集合数据结构, 比如，以下问题应该使用哪种数据结构来解决？

  - 反转字符串
  - 打印机驱动程序
  - 检测括号匹配（如 `()[]{}` 是否有效）
  - 任务调度（如 CPU 进程调度）
  - 计算两个列表的交集
  - 记录访问过的网页链接
  - 实现浏览器的前进和后退功能
  - 处理银行排队系统
  - 统计唯一访问用户 ID
  - 解析数学表达式（如 `3 + (4 * 5) - 6`）

# 本周内容

## Tree

0. 什么是 Root 和 Leaf？
1. 为什么我们需要 Tree？
2. 什么是 Binary Tree?
3. 最最最基本的 Binary Tree Node 是怎么 define 的？（用 C 语言）
4. Tree Traversal 的 Code Template 是什么？（用 C 语言）
5. 有哪三种不同的 Traversal Order？他们是什么意思？通常的应用场景是什么？

## Binary Search Tree

1. 说出以下操作的 pseudo code：

   - Insert
   - Search
   - Join
   - Delete
   - Free
   - Size
   - Height
   - Prune

2. 说出以上操作的时间复杂度（最差情况是什么）？
3. 为什么需要 rebalancing？
4. 有哪两个衡量 balance 的指标？分别是什么意思？哪个更严格？
5. 说出以下操作的 pseudo code：
   - Left/Right Rotation
   - Partition
6. 有哪些 Balance 的方法？（分类讲）
7. 以上 Balance 方法的 pseudo code：

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
