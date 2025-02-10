# End-Semester Exam (CP2) - C Programming & Data Structures

**Exclusive Breakdown Based on [END SEM CP2.pdf](END SEM CP2.pdf) (40 Marks)**

---

## 📊 **Topic Distribution**

| **Topic**                         | **Marks** | **Weightage** | **Key Subtopics**                                                       |
| --------------------------------- | --------- | ------------- | ----------------------------------------------------------------------- |
| **1. Data Types & Operators**     | 10        | 25%           | `sizeof`, bitwise XOR/shifts, binary arithmetic                         |
| **2. Control Structures & Logic** | 10        | 25%           | Division without `/`, printing even numbers without loops, XOR logic    |
| **3. Arrays & Structures**        | 10        | 25%           | Prime number counting, employee records (highest salary per department) |
| **4. Linked Lists**               | 6         | 15%           | Singly linked list operations (update nodes, display list)              |
| **5. File Handling**              | 4         | 10%           | Separating pass/fail marks into `PASS` and `FAIL` files                 |

---

## 🔍 **Detailed Subtopics & Question Types**

### 1. **Data Types & Operators**

- **Key Questions**:
  - **Q1a**: Print sizes of `int`, `float`, `double`, `long` using `sizeof`.
  - **Q1b**: Solve `z = x ^ y` followed by `z = z << 2` (e.g., `x=34`, `y=45` → **Output: 308**).
  - **Q1c**: Binary addition of `(42)10 + (60)10`.

### 2. **Control Structures & Logic**

- **Key Questions**:
  - **Q2a**: Divide a number by 2 without `/` operator (use bitwise shifts).
  - **Q2b**: Trace `MyFunc(100,100)` (XOR-based logic → **Output: "True Part..."**).
  - **Q2c**: Print first 10 even numbers **without loops/recursion** (use arithmetic progression).

### 3. **Arrays & Structures**

- **Key Questions**:
  - **Q3a**: Count primes in an array of `n` elements.
  - **Q3b**: Design a program to find the highest-paid employee in each department (structs, comparisons).

### 4. **Linked Lists**

- **Key Questions**:
  - **Page 2, Q2b**: Update a node’s register number at a specific position and display the updated list.

### 5. **File Handling**

- **Key Question**:
  - **Page 2, Q3a**: Read `Marks.dat`, write passed students (≥50) to `PASS` and failed to `FAIL`.

---

## 📌 **Exam Focus & Recommendations**

1. **Bitwise Operations (25%)**:

   - Practice XOR, left/right shifts, and binary arithmetic (e.g., `z = x ^ y << 2`).
   - Example:
     ```c
     int x = 34, y = 45, z;
     z = x ^ y;      // 34 ^ 45 = 77
     z = z << 2;     // 77 << 2 = 308 → Output: 308
     printf("%d", z);
     ```

2. **Arrays & Structures (25%)**:

   - Implement prime-checking logic for arrays.
   - Use structs to manage employee records (name, department, salary).

3. **Control Structures (25%)**:

   - Master division using bitwise shifts (e.g., `n >> 1` for division by 2).
   - Solve problems without loops (e.g., print even numbers using `printf` statements).

4. **Linked Lists (15%)**:

   - Focus on inserting/updating nodes in a singly linked list.

5. **File Handling (10%)**:
   - Use `fopen`, `fread`, `fwrite`, and `fclose` for file operations.

---

## 🧩 **Sample Code Snippets**

### Q1a: Print Data Type Sizes

```c
#include <stdio.h>
int main() {
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("long: %zu bytes\n", sizeof(long));
    return 0;
}
```
