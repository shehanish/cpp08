<h1 align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="100" />
  <br>
  C++ Module 08
</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B98-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Concept-STL-orange?style=for-the-badge" />
  <img src="https://img.shields.io/badge/School-42-black?style=for-the-badge" />
</p>

---

## 📖 Introduction

This module is an introduction to the **Standard Template Library (STL)**. You will explore various containers (vectors, lists, maps, etc.) and learn how to use **iterators** and **algorithms** to manipulate data efficiently and generically in C++98.

## 🛠️ Exercises

### [ex00: Easyfind](ex00/)
The first step into STL algorithms.
- **Goal**: Implement a template function `easyfind` that searches for an integer in a container.
- **Key Concepts**: Using `std::find`, working with container iterators, and handling errors when a value is not found.

### [ex01: Span](ex01/)
Managing ranges of numbers.
- **Goal**: Develop a `Span` class capable of storing a specific number of integers and finding the shortest and longest spans between them.
- **Key Concepts**: Sequence containers (like `std::vector`), algorithm-based range insertion, and exception handling for empty or full containers.

### [ex02: Mutated Abomination](ex02/)
Extending STL containers.
- **Goal**: Create a `MutantStack` class that makes the `std::stack` container iterable.
- **Key Concepts**: Understanding container adapters vs. sequence containers, and exposing underlying iterators to allow standard loop traversals on a stack.

## 📝 Learning Objectives

- **STL Containers**: Selecting the right tool (vector, list, deque) for the job.
- **Iterators**: Navigating through data structures uniformly.
- **Algorithms**: Leveraging built-in functions for searching, sorting, and transforming data.
- **Generic Programming**: Writing templates that work seamlessly with any STL-compliant container.

## 🚀 Usage

1. Navigate to an exercise folder:
   ```bash
   cd ex01
   ```
2. Build the project:
   ```bash
   make
   ```
3. Run the executable:
   ```bash
   ./span
   ```

---

<p align="center">
  <i>Part of the 42 C++ Pool. Developed by shkaruna.</i>
</p>
