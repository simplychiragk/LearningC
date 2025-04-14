# Simple Calculator

A lightweight C program that performs basic arithmetic operations (addition, subtraction, multiplication, division, and modulus) based on user input.

## Table of Contents

- [About](#about)
- [Features](#features)
- [Usage](#usage)
- [Example](#example)

## About

This command-line calculator, written in C, prompts the user to input two numbers and select an arithmetic operation. It displays the result with error handling for division/modulus by zero and invalid operations.

## Features

- Supports five operations:
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Division (`/`)
  - Modulus (`%`)
- Clear input prompts.
- Error handling for:
  - Division or modulus by zero
  - Invalid operation choices
- Lightweight and easy to use.

## Usage

1. Compile the program using a C compiler (e.g., `gcc calculator.c -o calculator`).
2. Run the executable (`./calculator` on Linux/Mac or `calculator.exe` on Windows).
3. Enter the first number.
4. Enter the second number.
5. Choose an operation (1–5):
   - `1` for addition
   - `2` for subtraction
   - `3` for multiplication
   - `4` for division
   - `5` for modulus
6. View the result or error message.

## Example
please enter the first number
10
please enter the second number
5
please enter the operation you want to perform
1 for addition
2 for subtraction
3 for multiplication
4 for division
5 for modulus
3
The result of the multiplication is 50


**Error case (division by zero):**
please enter the first number
10
please enter the second number
0
please enter the operation you want to perform
1 for addition
2 for subtraction
3 for multiplication
4 for division
5 for modulus
4
Error: Division by zero is not allowed.



*Built with ❤️ by Chirag Kumar (https://github.com/simplychiragk)*
