# Age Classifier &nbsp;![Language](https://img.shields.io/badge/language-C-blue) ![License: MIT](https://img.shields.io/badge/License-MIT-green.svg)

A beginner-friendly C program that classifies a person into different age groups based on their age input.  
Perfect for learning conditional statements, user input handling, and decision-making logic in C programming.

---

## 📑 Table of Contents
1. [Features](#features)
2. [Quick Start](#quick-start)
3. [Example Sessions](#example-sessions)
4. [Code Analysis](#code-analysis)
5. [Age Classification Logic](#age-classification-logic)
6. [Learning Objectives](#learning-objectives)
7. [Improvements & Roadmap](#improvements--roadmap)
8. [Educational Value](#educational-value)
9. [Contributing](#contributing)
10. [License](#license)

---

## ✨ Features

| Category        | Details                                    |
|-----------------|-------------------------------------------|
| **Language**    | C (ISO C99 compatible)                   |
| **Input Type**  | Integer (user's age)                     |
| **Output**      | Age category classification               |
| **Platforms**   | Cross-platform (Linux, Windows, macOS)   |
| **Footprint**   | < 5KB executable, 20 lines of source     |
| **Educational** | Demonstrates if-else branching logic      |

---

## 🚀 Quick Start

Clone and compile with any C99-compatible compiler:

```bash
git clone https://github.com/0PKunal/age-classifier.git
cd age-classifier
gcc -o age_classifier age_classifier.c
./age_classifier
```

**Windows (MinGW):**
```cmd
gcc -o age_classifier.exe age_classifier.c
age_classifier.exe
```

**Alternative compilers:**
```bash
# Using Clang
clang -o age_classifier age_classifier.c

# With warnings enabled (recommended)
gcc -Wall -Wextra -o age_classifier age_classifier.c
```

---

## 💻 Example Sessions

### Example 1: Child Classification
```
Please enter an age: 8

You are a Child.
```

### Example 2: Teenager Classification  
```
Please enter an age: 15

Your are a Teenager.
```

### Example 3: Adult Classification
```
Please enter an age: 35

You are an Adult.
```

### Example 4: Senior Classification
```
Please enter an age: 70

You are a Senior.
```

---

## 🔍 Code Analysis

**Program Structure:**
- **Lines of Code:** 20 total (19 executable)
- **Functions:** 1 (main function)
- **Variables:** 1 integer variable (`age`)
- **Conditional Statements:** 4 if-else branches
- **Libraries Used:** `stdio.h` for input/output operations

**Code Breakdown:**

| Line Range | Purpose                                    |
|------------|-------------------------------------------|
| 1          | Include standard I/O library              |
| 3-5        | Variable declaration and user prompt      |
| 6          | Read age input using scanf                |
| 8-10       | Child classification (age < 12)           |
| 10-12      | Teenager classification (12 ≤ age < 18)  |
| 12-14      | Adult classification (18 ≤ age ≤ 64)     |
| 14-16      | Senior classification (age ≥ 65)          |

---

## 🎯 Age Classification Logic

The program uses a hierarchical if-else structure to classify ages into four distinct categories:

| Age Range    | Category   | Classification Logic          |
|--------------|------------|-------------------------------|
| 0-11 years   | **Child**     | `if (age < 12)`               |
| 12-17 years  | **Teenager**  | `else if (age >= 12 && age < 18)` |
| 18-64 years  | **Adult**     | `else if (age >= 18 && age <= 64)` |
| 65+ years    | **Senior**    | `else if (age >= 65)`         |

**Decision Flow:**
1. Program reads integer input from user
2. Evaluates conditions sequentially from top to bottom
3. Executes first matching condition and prints result
4. Program terminates after classification

---

## 🎓 Learning Objectives

This program demonstrates fundamental C programming concepts:

**Primary Concepts:**
- **Conditional Logic:** Understanding if-else statement chains
- **User Input:** Using `scanf()` for reading integer data
- **Output Formatting:** Displaying results with `printf()`
- **Program Flow:** Sequential condition evaluation

**Programming Skills Developed:**
- Logical operator usage (`>=`, `<`, `<=`, `&&`)
- Proper condition ordering in if-else ladders  
- Basic input/output operations in C
- Simple decision-making algorithm implementation

---

## 🛠️ Improvements & Roadmap

| Priority | Enhancement                                      | Implementation Notes              |
|----------|--------------------------------------------------|-----------------------------------|
| **High** | Input validation for non-numeric input          | Use `fgets()` + `sscanf()` approach |
| **High** | Handle negative age inputs gracefully            | Add validation: `if (age < 0)`     |
| **Medium** | Error handling for scanf failures               | Check return value of `scanf()`    |
| **Medium** | Support for floating-point ages                 | Use `%f` format and round to integer |
| **Low**  | Interactive menu for multiple classifications   | Add loop for repeated usage        |
| **Low**  | Configurable age thresholds                     | Use constants for boundary values  |

**Enhanced Version Preview:**
```c
// Improved input validation example
char input[50];
int age, result;

printf("Please enter an age: ");
if (fgets(input, sizeof(input), stdin) != NULL) {
    result = sscanf(input, "%d", &age);
    if (result == 1 && age >= 0) {
        // Process valid age...
    } else {
        printf("Error: Please enter a valid positive integer.\n");
    }
}
```

---

## 📚 Educational Value

**Perfect for:**
- **Beginner C programmers** learning conditional statements
- **Computer Science students** studying decision-making algorithms  
- **Programming workshops** demonstrating if-else logic
- **Code review sessions** discussing input validation

**Concepts Reinforced:**
- Logical operators and boolean expressions
- Sequential condition evaluation importance
- Basic program structure and flow control
- Standard input/output library usage

**Extension Exercises:**
1. Add input validation to prevent program crashes
2. Implement a loop for multiple age classifications
3. Create a switch-case version for comparison
4. Add more granular age categories (toddler, pre-teen, etc.)

---

## 🤝 Contributing

**How to Contribute:**
1. **Fork** the repository and create a feature branch:
   ```bash
   git checkout -b feature/improvement-name
   ```

2. **Follow C coding standards:**
   - Use meaningful variable names
   - Add comments for complex logic
   - Ensure no compiler warnings with `-Wall -Wextra`

3. **Test thoroughly:**
   - Test with valid inputs (positive integers)
   - Test with invalid inputs (letters, negative numbers)
   - Verify all age categories work correctly

4. **Submit a Pull Request** with:
   - Clear description of changes
   - Test cases demonstrating improvements
   - Updated documentation if needed

**Contribution Ideas:**
- Input validation improvements
- Additional age categories
- Multi-language support
- Unit test framework integration

---

## 📄 License

Distributed under the **MIT License**. See `LICENSE` file for details.

**Copyright © 2025** - Educational C Programming Project

---

## 🔗 Related Resources

- **C Programming Fundamentals:** [W3Schools C Tutorial](https://www.w3schools.com/c/)
- **Input Validation in C:** Best practices for robust user input
- **Conditional Statements:** Advanced if-else techniques
- **Code Quality:** Static analysis tools for C programming

---

*This README was generated by AI, it's may have some mistake's.*
