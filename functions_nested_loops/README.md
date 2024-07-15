# Functions and Nested Loops in C Programming

## Learning Objectives

### General

- **Nested Loops**
  - Definition: Nested loops are loops inside another loop.
  - Usage: Execute a block of code repeatedly within another block of code.

- **Functions**
  - Definition: Functions are blocks of code that perform a specific task.
  - Usage: Modularize code for reusability and organization.

- **Declaration vs Definition of a Function**
  - **Declaration**: Provides the function signature (return type, name, parameters) without the function body.
  - **Definition**: Includes the function body along with the signature.

- **Function Prototype**
  - Definition: A function prototype declares a function before its actual definition.
  - Usage: Allows functions to be used before they are defined in the source file.

- **Scope of Variables**
  - **Global Variables**: Visible throughout the entire program.
  - **Local Variables**: Visible only within the block or function where they are declared.

- **GCC Flags**
  - **-Wall**: Enable all compiler warnings.
  - **-Werror**: Treat all warnings as errors.
  - **-pedantic**: Strictly adhere to ANSI C standards.
  - **-Wextra**: Enable additional compiler warnings.
  - **-std=gnu89**: Use the GNU dialect of ISO C90 (ANSI C with GNU extensions).

- **Header Files**
  - Definition: Header files contain function prototypes and macro definitions.
  - Usage: Include header files using `#include` directive to access functions and definitions.

## Common Commands

- **Nested Loops**:
  - Example:
    ```c
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            // Nested loop body
        }
    }
    ```

- **Functions**:
  - Example:
    ```c
    // Function declaration
    void greet(void);

    // Function definition
    void greet(void) {
        printf("Hello, World!\n");
    }
    ```

- **GCC Flags**:
  - `-Wall`, `-Werror`, `-pedantic`, `-Wextra`, `-std=gnu89`

- **Header Files**:
  - Example: `#include <stdio.h>` to include the standard I/O header file.
