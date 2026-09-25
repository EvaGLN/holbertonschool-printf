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





<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# AI-Assisted Code Reviewer (printf)

## Table of Contents :

  - [0. Codebase Confirmation and Global Understanding](#subparagraph0)
  - [1. Focus Area Selection](#subparagraph1)
  - [2. AI-Assisted Code Review](#subparagraph2)
  - [3. Analysis and Critique of AI Feedback](#subparagraph3)
  - [4. Reflective Technical Blog Post](#subparagraph4)
  - [5. Mentor Evaluation (Individual Analysis, Shared Codebase)](#subparagraph5)
## Introduction and Context

In systems programming, **code review is not optional**. In C, subtle errors related to memory management, variadic arguments, pointer arithmetic, or undefined behavior can lead to crashes, vulnerabilities, or silent corruption.

At the same time, AI-assisted tools are increasingly used to review code. While these tools can provide fast feedback, they often struggle with:

* Low-level memory semantics
* Ownership and lifetime reasoning
* Undefined or implementation-defined behavior
* Architectural constraints imposed by real projects

In this project, students will use an AI tool as a **code reviewer** for a complete, non-trivial C codebase: an implementation of **`printf`**.

The analysis is performed **individually**, even if the `printf` project was originally developed in a team. In team cases, both students may analyze the same codebase, but **must produce independent analyses and reflections**.

The goal is not to improve or refactor the code, but to **evaluate the AI’s ability to reason about complex, low-level C code**, and to reflect critically on its strengths and limitations.

---

## Learning Objectives

By completing this project, the student will be able to:

* Critically assess AI-generated feedback on a large C codebase
* Identify incorrect assumptions, hallucinations, or unsafe recommendations
* Reason about design decisions and constraints in a `printf` implementation
* Analyze low-level concerns such as memory handling, variadic functions, and buffering
* Distinguish superficial stylistic feedback from meaningful technical insights
* Communicate a structured, technically sound critique in written form
* Develop judgment about when AI-assisted code review is appropriate—and when it is not

---

## Resources

Students may consult, when needed:

* The official `printf` project specification (provided)
* `man printf`, `man stdarg`
* GNU C Library documentation
* Valgrind documentation (conceptual reference)
* ISO C standard (selected sections)
* Documentation or usage guidelines of the chosen AI tool

A **reference implementation of `printf`** will be provided for students who did not complete the integration project.

---

## Final Notes

* This is an **individual project**, even if `printf` was developed in a team.
* Students may analyze the same code but must submit **independent work**.
* AI is treated as a **fallible reviewer**, not an authority.
* Ambiguity and disagreement are part of the learning objective.

---


## Task
### 0. Codebase Confirmation and Global Understanding <a name='subparagraph0'></a>

### Objective

Establish context and demonstrate understanding of the full `printf` codebase before involving AI.

### Instructions

* Confirm which codebase you will analyze:

Your own `printf` implementation, or
The provided base implementation (if you did not complete the project).
* Review **all source and header files**.
* Identify:

Overall architecture
Major components and their responsibilities
Known constraints inherited from the original project

> You must **not modify** the code.

### Expected Outcome

A clear mental model of how the `printf` implementation works as a whole.

---

### 1. Focus Area Selection <a name='subparagraph1'></a>

## Focus Area Selection

### Objective

Define a precise analytical scope within a large codebase.

**Description:** Although the analysis covers the **entire codebase**, the student must select **one primary focus area** from a predefined list.

The chosen area will be analyzed **in depth**, while the rest of the code is discussed at a higher level.

## Focus Areas (Choose only one):

1. **Format String Parsing & Specifier Resolution**
Parsing logic, tokenization, specifier detection, error handling for malformed formats.
2. **Variadic Argument Handling (`va_list`)**
Use of `va_start`, `va_arg`, `va_copy`, argument lifetime, ordering, and safety.
3. **Memory Management & Allocation Strategy**
Dynamic allocation, ownership, lifetime, error handling, and leak risks.
4. **Output Buffering & Write Optimization**
Buffer size decisions, flushing strategy, number of `write` calls, trade-offs.
5. **Error Handling & Edge Cases**
NULL handling, invalid specifiers, boundary conditions, undefined behavior.

> The selected area must be explicitly stated and justified.

### Instructions

* Select **exactly one** focus area from the list.
* If the printf project was developed individually, you may select any focus area.
* If the printf project was developed in a team:
Each team member must select a **different** focus area
Focus areas **cannot overlap**

The selected focus area:

* Will guide your deep technical analysis
* Will be evaluated individually, even when the codebase is shared
* In your report, explicitly state:

The selected focus area
Why it is technically relevant in a `printf` implementation
* You will analyze the **entire codebase**, but:

The selected area must receive **deep, technical scrutiny**
Other areas may be discussed at a higher level

### Expected Outcome

A clearly stated and justified analytical focus.

---

### 2. AI-Assisted Code Review <a name='subparagraph2'></a>

### Objective

Use an AI tool as a **code reviewer**, not as an author or refactoring tool.

### Instructions

* Submit the **entire `printf` codebase** to an AI tool.
* Design a prompt that explicitly requests feedback on:

Code structure and readability
Logical correctness
Memory safety and low-level concerns
Edge cases and undefined behavior
Efficiency and architectural decisions
* Do **not** ask the AI to:

Rewrite the code
Optimize the code
Fix issues automatically

> You must preserve the **exact prompt** used as part of your documentation.

### Expected Outcome

A complete AI-generated code review response.

---

### 3. Analysis and Critique of AI Feedback <a name='subparagraph3'></a>

### Objective

Evaluate the AI’s feedback critically and technically.

### Instructions

* Analyze the AI’s feedback across the **entire codebase**.
* Perform a **deep critique** of the feedback related to your selected focus area.
* Classify AI feedback into categories such as:

Correct and useful
Superficial or generic
Incorrect or misleading
Unsafe or technically invalid
* You are expected to:

Explicitly **disagree** with the AI when justified
Explain *why* feedback is wrong or incomplete
State uncertainty when you cannot fully verify a claim

Blind agreement will be considered a failure of analysis.

### Expected Outcome

A reasoned, technically grounded evaluation of the AI’s review.

---

### 4. Reflective Technical Blog Post <a name='subparagraph4'></a>

### Objective

Communicate your analysis clearly and professionally.

### Instructions

Write a blog post with the following mandatory sections:

1. **Introduction**
Context of the `printf` project and scope of analysis.
2. **Focus Area**
Selected focus area and justification.
3. **AI Prompt**
Exact prompt used (verbatim).
4. **Summary of AI Feedback**
Synthesized overview (not raw output).
5. **Critical Evaluation**
Detailed critique, with emphasis on the selected focus area.
6. **Reflection on AI as a Reviewer**
Strengths, limitations, risks in low-level C code.
7. **Conclusion**
When (and if) AI should be trusted for reviewing systems code.

Tone must be analytical and technical.

### Expected Outcome

A structured, coherent, and critical technical blog post.

Publish your post on Linkedin, Medium or any other professional social network. This will help you start building your personal brand. Share the URL in the box below.

---

### 5. Mentor Evaluation (Individual Analysis, Shared Codebase) <a name='subparagraph5'></a>

### Objective

Evaluate the student’s analytical judgment **in context**, considering both:

* The individual AI-assisted analysis, and
* The quality of the underlying `printf` project.

### Evaluation Rules

* This task is evaluated by a **mentor or tutor**, not by peers.
* If `printf` was developed in a team:

Both students are evaluated **together regarding the project**
Each student must have selected a **different focus area**
Each student must submit an **independent report**
* The mentor will:

Review both reports
Evaluate each focus area independently
Perform a **global evaluation of the `printf` project**

The final evaluation combines **individual analytical quality** with **shared project quality**.

---


## Authors
Ksyv - [GitHub Profile](https://github.com/ksyv)
