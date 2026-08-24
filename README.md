# Low-Level Design in C++

This repository contains beginner-friendly C++ examples to understand core Object-Oriented Programming (OOP) principles used in Low-Level Design (LLD).

## What This Project Covers

- **Abstraction**: Hiding internal implementation details and exposing only essential operations.
- **Encapsulation**: Binding data and behavior together while controlling access to internal state.

## Project Structure

- `abstraction.cpp`
  - Demonstrates abstraction using an abstract base class `Car` with pure virtual methods.
  - `SportsCar` provides concrete implementation for behaviors like start, shift gear, accelerate, brake, and stop.
- `encapsulation.cpp`
  - Demonstrates encapsulation with private data members in `SportsCar`.
  - Exposes controlled access via public methods (`getcurrentspeed`, `getTyre`, `setTyre`) and behavior methods.

## How to Compile and Run

Use any C++ compiler that supports standard OOP features (for example, `g++`).

### 1. Abstraction Example

```bash
g++ abstraction.cpp -o abstraction
./abstraction
```

### 2. Encapsulation Example

```bash
g++ encapsulation.cpp -o encapsulation
./encapsulation
```

## Learning Notes

- Abstraction is helpful when you want to define a common contract and allow multiple implementations.
- Encapsulation protects object state and prevents uncontrolled updates from outside the class.
- Together, they are foundational for scalable and maintainable LLD.

## Suggested Next Steps

- Add examples for inheritance and polymorphism.
- Add input-driven simulation (multiple cars, commands).
- Add a simple `Makefile` for one-command build and run.

## Author

Ankit Kumar
