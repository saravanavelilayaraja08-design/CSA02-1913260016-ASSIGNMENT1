CSA02 – C Programming Assignment 1

Student Details

- Name: saravanavel I
- Register Number: 1913260016
- Programme:  B.Tech EEE
- Course Code: CSA02
- Course Name: C Programming
- Course Outcome: CO1
- Assignment: Assignment 1 – Electricity Billing Program

1. Introduction

This assignment focuses on developing a reliable electricity billing system for Grama Jyothi Rural Electricity Co-operative using the C programming language.

The main objective is to understand and implement:

- Constants and variables
- Data types and their sizes
- Preprocessor directives
- Macros and header files
- Formatted input and output
- Type conversion and precision
- Compilation process
- Electricity bill calculation
- Testing and validation
- Smart meter and time-of-day tariff

2. Software Requirements

- Programming Language: C
- Compiler: GCC
- Operating System: Windows / Linux
- Editor: VS Code / Code::Blocks / Dev-C++

Compiler Version: GCC (enter your installed version)

To check GCC version:

gcc --version

3. Repository Structure

CSA02-RegisterNumber-Assignment1/
│
├── README.md
│
├── Task01/
│   ├── task01.c
│   └── output.png
│
├── Task02/
│   ├── task02.c
│   └── output.png
│
├── Task03/
│   ├── task03.c
│   └── output.png
│
├── Task04/
│   ├── task04.c
│   └── output.png
│
├── Task05/
│   ├── main.c
│   ├── tariff.c
│   ├── tariff.h
│   └── output.png
│
├── Task06/
│   ├── task06.c
│   └── output.png
│
├── Task07/
│   ├── task07.c
│   └── output.png
│
├── Task08/
│   ├── billing.c
│   └── output.png
│
├── Task09/
│   ├── task09.c
│   └── output.png
│
├── Task10/
│   ├── task10.c
│   └── output.png
│
├── Task11/
│   ├── task11.c
│   └── output.png
│
└── Task12/
    ├── task12.c
    └── output.png

4. Compilation and Execution

Compile a C program using:

gcc -Wall -Wextra task01.c -o task01

Run the program:

./task01

For Windows:

task01.exe

For Task 5, compile multiple files:

gcc -Wall -Wextra main.c tariff.c -o billing

For debugging:

gcc -Wall -Wextra -DDEBUG main.c tariff.c -o billing

5. Task Descriptions and Results

Task| Description| Result
1| Problem Analysis| Identified inputs, outputs and constants
2| Data Types| Selected suitable C data types
3| Constants| Implemented tariff constants
4| Macros| Implemented safe macros
5| Header Files| Used include guards and DEBUG
6| Input/Output| Implemented scanf and printf
7| Type Conversion| Demonstrated precision and conversion
8| Compilation| Studied GCC compilation stages
9| Billing Program| Implemented and tested billing
10| Execution Comparison| Compared data types and ranges
11| Final Design| Recommended suitable data types
12| Smart Meter| Adapted design for peak-hour tariffs

6. Electricity Billing Details

The billing system uses the following tariff:

Consumption| Rate
First 100 units| Free
101–200 units| Rs. 2.25/unit
Above 200 units| Rs. 4.50/unit
Fixed charge| Rs. 50

Money is stored in integer paise to avoid floating-point rounding errors.

7. Testing

The programs are tested using:

- Normal meter readings
- Zero consumption
- Exactly 100 units
- Exactly 200 units
- Meter rollover from 65535 to 0
- Invalid input
- Different electricity consumption values
- Peak-hour smart meter calculations

8. Design Challenge

The original electricity billing system is modified to support smart meters.

The updated design considers:

- Watt-hour readings every 15 minutes
- Time-of-day tariff
- 20% additional charge during peak hours (6 PM to 10 PM)
- Runtime tariff configuration
- Wider integer data types

9. Conclusion

Through this assignment, I learned how to construct structured C programs using constants, variables, data types and preprocessor directives.

I also understood the importance of integer arithmetic for accurate billing, input validation, compilation stages and testing.

The assignment helped me develop a reliable electricity billing system and adapt the design to support smart meter requirements.

10. GitHub Repository

Repository Name: CSA02-RegisterNumber-Assignment1

GitHub Link: Add your repository URL here.
