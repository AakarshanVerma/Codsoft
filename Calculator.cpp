#include <iostream> 
// Library for input/output operations

using namespace std;

int main() {
    char operation; 
    // Variable to store the operation (+, -, *, /)
    float num1, num2;
     // Variables to store the two numbers entered by the user

    cout << "Enter the first number: ";
     // Prompt the user to enter the first number
    cin >> num1; 
    // Read the first number entered by the user

    cout << "Enter the second number: "; 
    // Prompt the user to enter the second number
    cin >> num2; 
    // Read the second number entered by the user

    cout << "Enter the operation (+, -, *, /): ";
     // Prompt the user to enter the operation
    cin >> operation; 
    // Read the operation entered by the user

    switch(operation) { 
        // Switch statement to perform different actions based on the operation
        case '+': 
        // If the operation is addition
            cout << "Result: " << num1 + num2;
             // Print the result of addition
            break; 
            // Exit the switch statement
        case '-':
         // If the operation is subtraction
            cout << "Result: " << num1 - num2; 
            // Print the result of subtraction
            break; 
            // Exit the switch statement
        case '*': 
        // If the operation is multiplication
            cout << "Result: " << num1 * num2; 
            // Print the result of multiplication
            break;
             // Exit the switch statement
        case '/':
         // If the operation is division
            if (num2 != 0) { 
                // Check if the second number is not zero (to avoid division by zero)
                cout << "Result: " << num1 / num2; 
                // Print the result of division
            } else { 
                // If the second number is zero
                cout << "Error! Division by zero is not allowed.";
                 // Display an error message
            }
            break; 
            // Exit the switch statement
        default: 
        // If the operation is not one of the above
            cout << "Invalid operation!"; 
            // Display an error message
    }

    return 0; 
    // Exit the program
}
