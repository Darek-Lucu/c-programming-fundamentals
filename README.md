# C Programming Fundamentals

A collection of C programming exercises, independent practice tasks, and introductory examples organized by topic.

This repository is intended to document my learning progress in C programming as a first-year Applied Computer Science and Automation (Dual Education) student at Ștefan cel Mare University of Suceava (USV).

## Repository Structure

- `01-basic-operations/` – Input/output, arithmetic operations, and simple calculations.
- `02-conditionals/` – Decisions using `if`, `else`, and `switch`.
- `03-loops/` – Repetition, counters, accumulators, and basic number algorithms.
- `04-functions/` – Function declarations, parameters, return values, and reusable code.
- `05-arrays/` – Reading, processing, searching, and sorting one-dimensional arrays.
- `06-lab-exercises/` – Reserved for university PCLP laboratory assignments.
- `07-mini-projects/` – Reserved for small programming projects.

## Technologies

- C
- GCC
- C standard: C11

## Compile and Run

Compile one source file at a time:

```bash
gcc path/to/program.c -std=c11 -Wall -Wextra -o program
```

On Windows:

```bash
gcc path/to/program.c -std=c11 -Wall -Wextra -o program.exe
program.exe
```

On Linux or macOS:

```bash
./program
```

## Notes

- Every `.c` file is a separate program and has its own `main()` function.
- Do not compile all source files into one executable at the same time.
- The examples use fixed-size arrays where needed to keep the exercises introductory.
- The function and array sections are included as learning material; use them in coursework when these topics have been covered.
- University laboratory tasks should be kept in the dedicated `06-lab-exercises/` folder and should follow the course requirements.

## Purpose

To practice programming fundamentals, improve problem-solving skills, and document progress through coursework and independent exercises.

---

**Status:** Ongoing learning repository.
