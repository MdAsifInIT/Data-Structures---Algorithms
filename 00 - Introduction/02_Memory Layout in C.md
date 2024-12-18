
## Memory Layout

```
High Memory Address
+---------------------+
|       Stack         |  (Function call data, local variables)
|  (grows downward)   |
+---------------------+
|                     |
|      Free Space     |  (between Stack and Heap)
|                     |
+---------------------+
|       Heap          |  (Dynamically allocated memory)
|  (grows upward)     |
+---------------------+
| Uninitialized Data  |  (BSS, Global/static uninitialized variables)
+---------------------+
| Initialized Data    |  (Global/static initialized variables)
+---------------------+
|     Text Segment    |  (Code, read-only)
+---------------------+
Low Memory Address
```

## Memory Segment Definitions

1. **Text Segment**  
   **Definition:** Contains the compiled code (instructions) of the program. Typically read-only.

2. **Initialized Data Segment**  
   **Definition:** Holds global and static variables that are initialized with specific values before the program runs.

3. **Uninitialized Data Segment (BSS)**  
   **Definition:** Contains global and static variables that are not initialized (default to zero).

4. **Heap**  
   **Definition:** Memory area for dynamic allocation, managed manually (using `malloc`, `free`). Grows upward.

5. **Stack**  
   **Definition:** Stores local variables and function call data. Grows downward as functions are called.

6. **Free Space**  
   **Definition:** The area between the heap and stack, allowing both to grow without conflict.

7. **Global Variables**  
   **Definition:** Variables declared outside functions, accessible from any part of the program.

8. **Static Variables**  
   **Definition:** Variables that retain their value between function calls, initialized only once.

9. **Function Call Data**  
   **Definition:** Information stored on the stack for each function call, including parameters and return addresses.