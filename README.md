*This project has been created as part of the 42 curriculum by tsaby.*

# C++ Module 03

> Inheritance

## Description

Building a small class hierarchy and observing construction / destruction chaining.

Part of the C++ piscine of the 42 curriculum: every exercise is written in **C++98** and compiled with `-Wall -Wextra -Werror -std=c++98`.

## Exercises

| Exercise | Name | What it does |
|---|---|---|
| [`ex00`](ex00/) | Aaaaand... OPEN! | `ClapTrap`: a robot with hit points, energy points and attack damage that can attack, take damage and repair itself. |
| [`ex01`](ex01/) | Serena, my love! | `ScavTrap` inherits from `ClapTrap`, overrides `attack()` and adds `guardGate()`. |
| [`ex02`](ex02/) | Repetitive work | `FragTrap`, another child of `ClapTrap`, with its own stats and `highFivesGuys()`. |

## Instructions

Each exercise is an independent program with its own `Makefile`:

```bash
cd ex00
make
```

| Exercise | Binary | Usage |
|---|---|---|
| `ex00` | `OPEN` | `./OPEN` |
| `ex01` | `Serena` | `./Serena` |
| `ex02` | `Rep` | `./Rep` |

`make clean` removes the object files, `make fclean` also removes the binary and `make re` rebuilds from scratch.

## Resources

- [cppreference.com](https://en.cppreference.com/w/cpp) — language and standard library reference
- [cplusplus.com](https://cplusplus.com/reference/) — C++98 standard library reference
