# DSA - Data Structures and Algorithms in C++

This is a project with straightforward implementations of solutions for problems involving well-known data structures and algorithms.

## Table of Contents
- [Overview](#overview)
- [Project Structure](#project-structure)
- [Getting Started](#getting-started)
- [Building the Project](#building-the-project)
- [Running the Main Program](#running-the-main-program)
- [Running the Tests](#running-the-tests)
- [Dependencies](#dependencies)
- [License](#license)

## Overview

This project provides implementations for various data structures and algorithms. Currently, it includes:

- **Sorting:**
    - [Bubble Sort](https://www.davidwsilva.com/computer_science/cs_1/)
    - [Selection Sort](https://www.davidwsilva.com/computer_science/cs_2/)
    - [Insertion Sort](https://www.davidwsilva.com/computer_science/cs_3/)
    - [Quick Sort](https://www.davidwsilva.com/computer_science/cs_4/)
    - [Merge Sort](https://www.davidwsilva.com/computer_science/cs_5/)
    - Shell Sort
    - Counting Sort
    - Radix Sort
    - Heap Sort
- **Array:**
    - Two Sum
    - Three Sum
    - Four Sum
    - Remove Duplicates from Sorted Array
    - Remove Element
- **String:**
    - Is a palindrome?
    - Strings are isomorphic?
    - Valid anagram?
    - Word Pattern
    - Reverse string
- **Linked List**
    - Reverse
    - Detect Cycle
    - List Cycle
- Additional algorithms and data structures will be added progressively.

The project supports C++17 and uses **CMake** as the build system and **GoogleTest** for testing.


## Getting Started

### Cloning the Repository

To clone the repository to your local environment, run:

```bash
git clone https://github.com/davidwilliam/DSA.git
```

Alternatively, you can use SSH:

```bash
git clone git@github.com:davidwilliam/DSA.git
```

## Dependencies
To build and run the project, you will need:

- CMake (version 3.10 or later)
- A C++17 compatible compiler (e.g., g++, clang++)
- GoogleTest (automatically fetched via CMake's FetchContent)

## Supported Platforms
The project has been tested with:

- GCC version 9.3 and later
- Clang version 10.0 and later
- AppleClang 12.0 and later (macOS)

# Building the Project

Create a build directory:

```bash
mkdir build
cd build
```
Run CMake to configure the project:

```bash
cmake ..
```

Build the project:

```bash
cmake --build .
```

This will compile the source files and generate the `main` and `main_exec` executable for running the demonstration program, as well as `test_exec` for running unit tests.

# Running the Demos

There are currently four demos:

Sorting:

```bash
./sorting_demo
```

Array:

```bash
./array_demo
```

String:

```bash
./string_demo
```

Linked List:

```bash
./linked_list_demo
```

# Running the Tests

To run the tests, use the following command from the `build/` directory:

```bash
ctest
```

# Contributing

Feel free to contribute by adding more algorithms or improving the existing ones. Please submit a pull request with clear documentation of changes.

# License

This project is licensed under the MIT License - see the [LICENSE](https://github.com/davidwilliam/DSA/blob/main/LICENSE) file for details.
