# Low-Level Design in C++

[![Language: C++](https://img.shields.io/badge/Language-C%2B%2B-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![Focus: LLD](https://img.shields.io/badge/Focus-Low%20Level%20Design-0A7E8C)](https://github.com/KUMARANKIT3012/Low-Level-Design)
[![Status: In Progress](https://img.shields.io/badge/Status-In%20Progress-F39C12)](https://github.com/KUMARANKIT3012/Low-Level-Design)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Ankit%20Kumar-0A66C2?logo=linkedin&logoColor=white)](https://www.linkedin.com/in/ankitkumarsist/)
[![Portfolio](https://img.shields.io/badge/Portfolio-Visit-1ABC9C?logo=vercel&logoColor=white)](https://personal-portfolio-orpin-iota.vercel.app/)

This repository contains beginner-friendly C++ examples to understand core Object-Oriented Programming (OOP) principles used in Low-Level Design (LLD).

## What This Project Covers Now

- **Abstraction**: Hiding internal implementation details and exposing only essential operations.
- **Encapsulation**: Binding data and behavior together while controlling access to internal state.

## Complete LLD Topic Roadmap

This repository is planned as a complete LLD learning path from fundamentals to machine-coding style design.

### 1. OOP Fundamentals

- [x] Encapsulation
- [x] Abstraction
- [ ] Inheritance
- [ ] Polymorphism (compile-time and runtime)
- [ ] Interfaces and abstract classes in depth

### 2. Object Relationships

- [ ] Association
- [ ] Aggregation
- [ ] Composition
- [ ] Dependency

### 3. SOLID Principles

- [ ] Single Responsibility Principle (SRP)
- [ ] Open/Closed Principle (OCP)
- [ ] Liskov Substitution Principle (LSP)
- [ ] Interface Segregation Principle (ISP)
- [ ] Dependency Inversion Principle (DIP)

### 4. Design Patterns

- [ ] Creational: Singleton, Factory, Abstract Factory, Builder, Prototype
- [ ] Structural: Adapter, Bridge, Composite, Decorator, Facade, Proxy
- [ ] Behavioral: Strategy, Observer, Command, State, Iterator, Template Method, Chain of Responsibility, Mediator

### 5. LLD Building Blocks

- [ ] UML basics (class diagrams, sequence diagrams)
- [ ] Identifying entities, responsibilities, and contracts
- [ ] Validation, error handling, and defensive coding
- [ ] Extensibility and maintainability practices

### 6. Practical LLD Problems

- [ ] Parking Lot System
- [ ] Library Management System
- [ ] Elevator System
- [ ] Tic-Tac-Toe / Chess design
- [ ] Splitwise / Payment simplification
- [ ] Rate Limiter / Logger / Cache design

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

## Coverage Status

- Completed topics: 2
- Planned topics: OOP + SOLID + Design Patterns + LLD case studies
- Current phase: Fundamentals

## Suggested Next Steps

- Add `inheritance.cpp` and `polymorphism.cpp`.
- Add one complete mini case study (Parking Lot or Library Management).
- Add a simple `Makefile` for one-command build and run.

## Author

Ankit Kumar

## Connect

- LinkedIn: https://www.linkedin.com/in/ankitkumarsist/
- Portfolio: https://personal-portfolio-orpin-iota.vercel.app/
