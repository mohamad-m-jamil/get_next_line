# Get Next Line

**`get_next_line`** is a C library function designed to read lines from a file descriptor. This project focuses on implementing a function that can read a file or standard input line-by-line, handling varying buffer sizes and ensuring that each call returns one line at a time.

## Table of Contents

- [Goals](#goals)
- [Common Instructions](#common-instructions)
- [Mandatory Part](#mandatory-part)
- [Bonus Part](#bonus-part)
- [Installation](#installation)
- [Usage](#usage)
- [Testing](#testing)
- [Contributing](#contributing)
- [License](#license)

## Goals

The primary goal of this project is to create a function, `get_next_line`, that reads and returns lines from a file descriptor. It will enhance your understanding of static variables and file handling in C.

## Common Instructions

- The project must be written in C.
- Adhere to the Norm. Any deviations or bonus functions included will affect your score if they do not comply with the Norm.
- Ensure that functions do not quit unexpectedly (e.g., segmentation faults, double frees). If they do, the project will be considered non-functional.
- Properly free all heap-allocated memory. No memory leaks will be tolerated.
- Use a Makefile to compile your code with `-Wall`, `-Wextra`, and `-Werror` flags. The Makefile should include at least the rules: `NAME`, `all`, `clean`, `fclean`, and `re`.
- You must be able to compile the project with and without the `-D BUFFER_SIZE` flag.

## Mandatory Part

### Function Name

- `get_next_line`

### Prototype

```c
char *get_next_line(int fd);
