This is a basic C++ console application that performs simple arithmetic operations based on user input.

Features
Supports operations:

Addition (+)

Subtraction (-)

Multiplication (*)

Division (/)

(Note: Modulus % is mentioned, but handled like division because double type is used.)

Validates division by zero.

Handles invalid operators gracefully.

How to Run
Save the code in a file, for example: calculator.cpp.

Open terminal or command prompt.

Compile the code:

g++ calculator.cpp -o calculator
Run the program:

bash
Copy
Edit
./calculator
Example Output
Enter Operator (+,-,*,/,%): +
Enter two numbers: 5 3
Result:8

If you try division by zero:
Enter Operator (+,-,*,/,%): /
Enter two numbers: 10 0
Error! Devision is zero

If an invalid operator is entered:
Enter Operator (+,-,*,/,%): ^
Invalid Operator.
Notes
Important: % operator normally works only with integers.
Since num1 and num2 are declared as double, modulus (%) doesn't work properly.

Division by zero is checked to avoid runtime errors.

Author
Ibad Ali

