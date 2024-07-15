# C Programming Basics

## Learning Objectives

### General

- **Why C Programming is Awesome**
  - C is powerful, efficient, and widely used in system programming, embedded systems, and software development.

- **Inventors and Key Figures**
  - **Inventors**: Dennis Ritchie
  - **Key Figures**: Brian Kernighan, Linus Torvalds (for contributions to Linux kernel)

- **Compiling with `gcc`**
  - **gcc (GNU Compiler Collection)**: Compiles C code into executable files.
  - **Entry Point**: When you type `gcc main.c`, `main.c` is compiled into an executable with `main` as the entry point.

- **Understanding `main` Function**
  - **`main` Function**: Entry point of C programs, where execution begins.
  - **Influence on Return Value**: Return value of `main` (usually `int`) determines program's exit status.

- **Printing Text**
  - **`printf`**: Formatted output to stdout.
    - Example: `printf("Hello, World!\n");`
  - **`puts`**: Output a string to stdout followed by a newline.
    - Example: `puts("Hello, World!");`
  - **`putchar`**: Output a character to stdout.
    - Example: `putchar('H');`

- **Getting Size of Types**
  - **`sizeof` Operator**: Returns the size in bytes of a data type.
    - Example: `sizeof(int)`

- **Compiling with `gcc`**
  - **Default Program Name**: `a.out` if not specified using `-o`.
    - Example: `gcc main.c -o program_name`

- **C Coding Style**
  - **Official C Coding Style**: Follow conventions like those in `betty-style`.
    - Check style with `betty-style`.

- **Finding Headers**
  - **Include Standard Library Functions**: Find the right header (e.g., `stdio.h`) for standard library functions.

## Common Commands

- **`gcc`**: GNU Compiler Collection for compiling C code.
  - Example: `gcc main.c -o program_name`

- **`printf`**: Print formatted text to stdout.
  - Example: `printf("Hello, World!\n");`

- **`puts`**: Print a string to stdout followed by a newline.
  - Example: `puts("Hello, World!");`

- **`putchar`**: Print a single character to stdout.
  - Example: `putchar('H');`

- **`sizeof`**: Unary operator to determine the size of a type in bytes.
  - Example: `sizeof(int)`
