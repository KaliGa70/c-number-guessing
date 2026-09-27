# C Number Guessing

A simple command-line number guessing game developed in **C** as part of my journey to learn the C programming language.

The player must guess a randomly generated number within a predefined range. After each attempt, the game provides a hint indicating whether the guessed number is higher or lower than the target.

## Features

* Random number generation
* Configurable number range
* Player name input
* Attempt counter
* Hints to help find the number
* Input validation
* Option to play again
* Interactive command-line interface

## How It Works

At the beginning of each game, the program generates a random number between **1 and 100**.

The player enters a guess and the program indicates whether the target number is:

* Higher than the guess
* Lower than the guess
* Equal to the guess

The game continues until the player finds the correct number.

## Project Structure

```text
c-number-guessing/
├── include/
│   └── number-guessing.h
├── src/
│   └── number-guessing.c
├── main.c
├── .gitignore
└── LICENSE
```

## Technologies

* **C**
* **GCC**
* **Git**
* **GitHub**

## Concepts Practiced

This project was created to practice:

* Variables and data types
* Functions
* Pointers
* Loops
* Conditional statements
* Arrays
* Strings
* `strcpy()`
* `fgets()`
* `strcspn()`
* Random number generation
* `rand()`
* `srand()`
* `time()`
* Input validation
* Counters
* Modular programming
* Header files
* Separating `.h` and `.c` files
* Compiling multiple source files

## Random Number Generation

The game initializes the random number generator using the current time:

```c
srand((unsigned)time(NULL));
```

A number within the selected range is then generated using:

```c
rand() % (max - min + 1) + min;
```

This allows the target number to change every time the program starts a new game.

## Compilation

Make sure you have **GCC** installed.

From the project root, compile the program with:

```bash
gcc main.c src/number-guessing.c -I include -o number-guessing
```

Then run it:

### Windows

```bash
./number-guessing.exe
```

### Linux / macOS

```bash
./number-guessing
```

## Example

```text
========================================
       NUMBER GUESSING GAME
========================================

Enter your name: Angel

I'm thinking of a number between 1 and 100.

Enter your guess: 50

The number is higher!

Enter your guess: 75

The number is lower!

Enter your guess: 63

Congratulations, Angel!
You guessed the number in 3 attempts.

Play again? (Y/n):
```

## Purpose

This project is part of a series of C programming projects designed to progressively improve my understanding of the language.

The goal is to practice programming fundamentals by building projects from scratch and gradually introducing more complex concepts.

## Author

**Ángel Andrés García Arroyo**

* GitHub: [@KaliGa70](https://github.com/KaliGa70)
* LinkedIn: [KaliGa70](https://www.linkedin.com/in/kaliga70)

## License

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for more information.
