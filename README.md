<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# Integration Project: printf

## Table of Contents :

  - [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](#subparagraph0)
  - [1. Education is when you read the fine print. Experience is what you get if you don't](#subparagraph1)
  - [2. With a face like mine, I do better in print](#subparagraph2)
  - [3. What one has not experienced, one will never understand in print](#subparagraph3)
## Introduction

The **printf** integration project represents a turning point in your C programming journey. Up to this point, you have mostly worked with concepts in isolation; here, you are expected to bring them together to solve a concrete, real-world problem. Implementing your own version of `printf` requires reading and interpreting technical specifications, dealing with partial or implicit requirements, and making justified design decisions—exactly the kind of challenges faced in professional software development.

This project is not about “replicating” `printf` line by line, but about **understanding how it works internally**: how strings are parsed, how variadic arguments are handled, how output is formatted, and how memory is managed safely. It is intentionally demanding. Feeling lost at times is normal. What matters is not immediate completeness, but demonstrating sound reasoning, technical judgment, and a solid grasp of the fundamentals you have been building throughout the course.

## Resources

**Read or watch**:

- [Secrets of printf](/rltoken/sL9Yayp_iDeR9slrQtPqYQ)
- **Group Projects** concept page (*Don't forget to read this*)
- **Flowcharts** concept page

**man or help**:

- `printf (3)`

## Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own `main.c` files at compilation; do not push your own `main.c` file. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `main.h`
- Don't forget to push your header file
- All your header files should be include guarded

### GitHub
**There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.**

## More Info

### Authorized functions and macros

- `write` (`man 2 write`)
- `malloc` (`man 3 malloc`)
- `free` (`man 3 free`)
- `va_start` (`man 3 va_start`)
- `va_end` (`man 3 va_end`)
- `va_copy` (`man 3 va_copy`)
- `va_arg` (`man 3 va_arg`)


### Compilation

- Your code will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

- As a consequence, be careful not to push any c file containing a `main` function in the root directory of your project (you could have a `test` folder containing all your tests files including `main` functions)
- Our main files will include your main header file (`main.h`): `#include main.h`
- You might want to look at the gcc flag `-Wno-format` when testing with your `_printf` and the standard `printf`. Example of test file that you could use:

```
alex@ubuntu:~/c/printf$ cat main.c 
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
alex@ubuntu:~/c/printf$
```

- We strongly encourage you to work all together on a set of tests
- If the task does not specify what to do with an edge case, do the same as `printf`


## Task
### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life <a name='subparagraph0'></a>

Write a function that produces output according to a format.

* Prototype: `int _printf(const char *format, ...);`
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
* `c`
* `s`
* `%`
* You don't have to reproduce the buffer handling of the C library `printf` function
* You don't have to handle the flag characters
* You don't have to handle field width
* You don't have to handle precision
* You don't have to handle the length modifiers

**Repo:**

* GitHub repository: `holbertonschool-printf`

---

### 1. Education is when you read the fine print. Experience is what you get if you don't <a name='subparagraph1'></a>

Handle the following conversion specifiers:

* `d`
* `i`
* You don't have to handle the flag characters
* You don't have to handle field width
* You don't have to handle precision
* You don't have to handle the length modifiers

**Repo:**

* GitHub repository: `holbertonschool-printf`

---

### 2. With a face like mine, I do better in print <a name='subparagraph2'></a>

Handle the following custom conversion specifiers:

* `b`: the unsigned int argument is converted to binary

```typescript
alex@ubuntu:~/c/printf$ cat main.c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 98);
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 main.c
alex@ubuntu:~/c/printf$ ./a.out
1100010
alex@ubuntu:~/c/printf$
```

**Repo:**

* GitHub repository: `holbertonschool-printf`

---

### 3. What one has not experienced, one will never understand in print <a name='subparagraph3'></a>

Handle the following conversion specifiers:

* `u`
* `o`
* `x`
* `X`
* You don't have to handle the flag characters
* You don't have to handle field width
* You don't have to handle precision
* You don't have to handle the length modifiers

**Repo:**

* GitHub repository: `holbertonschool-printf`

---


## Authors
Ksyv - [GitHub Profile](https://github.com/ksyv)
