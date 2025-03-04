# Recursion & Algo Time Analysis

## Recursion

### 核心目的：

- 递归可以解决什么？
- 递归的两个特点是什么？
- 如何解决递归问题？（3 步）

### 核心目的：

- 递归是一种 **将问题分解为更小的子问题** 的编程技巧，通常用于解决 **可以被自身定义的问题**。
- 递归方法通常包括：
  1. **基准情况 (Base Case)：** 直接返回结果，防止无限递归。
  2. **递归情况 (Recursive Case)：** 将问题分解为更小的子问题，并递归调用自身。
- 递归的核心特点：
  1. 终止条件（base case）
  2. 自身调用
- 递归的方法论：
  1. 确定函数结构（Signature/Header）：参数和返回值
  2. 确定 Base Case：递归终止条件
  3. 确定递归方式：函数的等价关系

### 递归的关键概念：

- 递归调用的 **调用栈 (Call Stack)**：每次递归调用都会创建一个新的栈帧，直到基准情况被满足。
- **递归 vs. 迭代：** 递归代码简洁，但可能导致栈溢出 (Stack Overflow)，迭代通常更高效。

### 递归示例：

#### 1. 经典递归：斐波那契数列

```C
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("%d\n", fibonacci(10)); // 输出第10个斐波那契数
    return 0;
}
```

时间复杂度：**O(2ⁿ)**（指数级，非常低效）

#### 2. 使用缓存优化 (Memoization)

```c
#include <stdio.h>

#define MAX_N 100
int memo[MAX_N] = {0};

int fibonacci_memo(int n) {
    if (n <= 1) return n;  // 基本情况
    if (memo[n] != 0) return memo[n];  // 如果已经计算过，直接返回缓存结果

    // 计算并缓存结果
    memo[n] = fibonacci_memo(n - 1) + fibonacci_memo(n - 2);
    return memo[n];
}

int main() {
    printf("%d\n", fibonacci_memo(10));  // 输出第10个斐波那契数
    return 0;
}
```

时间复杂度：**O(n)**（大幅优化）

### 遗留问题：Wrapper function，why?

- 在某些情况下，递归函数可能需要额外的参数（如缓存、累加值等）。
- **Wrapper function (包装函数)** 作用：
  - 避免外部调用者需要提供复杂的参数。
  - 让递归逻辑更加清晰。

示例：

```c
#include <stdio.h>

int factorial_helper(int n, int acc) {
    if (n == 0) return acc;
    return factorial_helper(n - 1, n * acc);
}

int factorial(int n) {
    return factorial_helper(n, 1);
}

int main() {
    printf("%d\n", factorial(5)); // 输出 120
    return 0;
}
```

在这里，`factorial_helper` 作为内部递归函数，使用 `acc` 存储累积值。

---

## Time Analysis

### 核心目的：

- **衡量算法的效率**，通常用 **时间复杂度 (Time Complexity)** 来表达随输入规模变化的运行时间增长情况。
- 重点分析 **最坏情况 (Worst Case)**，有时也会考虑 **平均情况 (Average Case)** 和 **最好情况 (Best Case)**。

### 常见时间复杂度：

| 复杂度         | 例子                           | 说明                           |
| -------------- | ------------------------------ | ------------------------------ |
| **O(1)**       | 访问数组元素 `arr[i]`          | **常数时间**，不随输入规模增长 |
| **O(log n)**   | 二分查找                       | 每次减少一半输入规模           |
| **O(n)**       | 遍历数组                       | 线性增长                       |
| **O(n log n)** | 归并排序、快速排序（平均情况） | 高效排序算法                   |
| **O(n²)**      | 嵌套循环（如冒泡排序）         | 每个元素都要与其他元素比较     |
| **O(2ⁿ)**      | 递归斐波那契                   | 指数增长，极不高效             |

### 示例分析：

#### 1. 线性时间 O(n)

```c
#include <stdio.h>

int find_max(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int main() {
    int arr[] = {3, 5, 1, 8, 2};
    printf("Max: %d\n", find_max(arr, 5));
    return 0;
}
```

遍历 `n` 个元素 → **O(n)**

#### 2. 二分查找 O(log n)

```c
#include <stdio.h>

int binary_search(int arr[], int left, int right, int target) {
    if (left > right) return -1;
    int mid = (left + right) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] > target) return binary_search(arr, left, mid - 1, target);
    return binary_search(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9};
    int index = binary_search(arr, 0, 4, 5);
    printf("Found at index: %d\n", index);
    return 0;
}
```

每次减少一半输入规模 → **O(log n)**

#### 3. 递归时间复杂度分析

如果递归问题分解为 **T(n) = 2T(n/2) + O(n)**，可以用 **递归树法** 或 **主定理 (Master Theorem)** 计算复杂度。

**归并排序的时间复杂度：**

$$T(n) = 2T\left(\frac{n}{2}\right) + O(n) \Rightarrow O(n \log n)$$

---

## 重点复习：

1. **递归三要素**：基准情况、递归情况、调用栈。
2. **递归优化**：尾递归、记忆化 (Memoization)、动态规划。
3. **时间复杂度计算**：分析不同算法的增长趋势。
4. **常见算法复杂度对比**：明白什么时候该用 O(n) 还是 O(log n) 算法。

---

这次所有代码都保证是 C 语言的了，你可以复制这个 Markdown 直接用于复习！🚀 如果有任何问题或需要补充内容，欢迎提问 😊
