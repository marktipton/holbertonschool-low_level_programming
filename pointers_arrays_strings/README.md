# Pointers, Arrays, and Strings in C Programming

## Learning Objectives

### General

- **Pointers**
  - **Definition**: Pointers are variables that store memory addresses.
  - **Usage**: Access and manipulate memory directly, pass addresses to functions for efficiency.

- **Arrays**
  - **Definition**: Arrays are collections of elements of the same data type stored in contiguous memory locations.
  - **Usage**: Store and manipulate multiple values under a single name.

- **Differences Between Pointers and Arrays**
  - **Pointers**: Store memory addresses, allow direct memory manipulation.
  - **Arrays**: Store collections of data elements, accessed via indexing.

- **Strings**
  - **Definition**: Strings are sequences of characters stored as arrays of characters terminated by a null character (`'\0'`).
  - **Usage**: Manipulate text data, use library functions for operations like concatenation and comparison.

- **Scope of Variables**
  - **Global Variables**: Visible throughout the entire program.
  - **Local Variables**: Visible only within the block or function where they are declared.

## Common Commands

- **Pointers**:
  - **Example**:
    ```c
    int *ptr;
    int var = 10;
    ptr = &var;
    ```

- **Arrays**:
  - **Example**:
    ```c
    int numbers[5] = {1, 2, 3, 4, 5};
    ```

- **Strings**:
  - **Example**:
    ```c
    char str[] = "Hello";
    printf("String length: %lu\n", strlen(str));
    ```
