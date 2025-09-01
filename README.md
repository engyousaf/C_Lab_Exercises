# 📘 C Programming Labs

This repository contains **C programming lab exercises** covering fundamental and advanced concepts.  
The labs include **macros, bit manipulation, pointers, function pointers, string operations, and algorithmic problems**.  
Each lab is implemented as an independent `.c` file, organized into sets for clarity and easy testing.

---

## 📂 Repository Structure

### 🔹 Set 1: Macros & Bit Operations
Folder: `Set1_Macros_BitOps`  
- `lab2_1_is_signed_macro.c` → Check if a type is signed or unsigned using a macro.  
- `lab2_2_bit_operations.c` → Functions to set, clear, and toggle the nth bit of an integer.  
- `lab2_3_endian_swap.c` → Convert a 32-bit unsigned integer from little-endian to big-endian.  
- `lab2_4_abs_macro.c` → Macro to return the absolute value of a number.  

---

### 🔹 Set 2: Functions & Binary Operations
Folder: `Set2_Functions_BinaryOps`  
- `lab1_swap_function.c` → Swap two integers using pointers.  
- `lab2_counter_function.c` → Counter function returning incremented value on each call.  
- `lab3_modify_msb.c` → Modify the 2 most significant bits (MSBs) of an unsigned int.  
- `lab4_binary_print.c` → Print binary representation of an unsigned int.  
- `lab5_maximum_byte.c` → Return the maximum byte value of an unsigned int.  

---

### 🔹 Set 3: Pointers & Advanced Tasks
Folder: `Set3_Pointers_Advanced`  
- `lab1_swap_pointers.c` → Swap two pointers.  
- `lab2_function_pointer_call.c` → Call a function using a function pointer.  
- `lab3_custom_strcpy.c` → Implementation of custom `strcpy` function.  
- `lab4_two_sum.c` → Solve LeetCode #1 "Two Sum" problem.  
- `lab5_address_alignment.c` → Check if an address is **4KB aligned**.  

---

## ⚙️ Compilation & Execution

To compile any lab file:

```bash
gcc filename.c -o output
./output
