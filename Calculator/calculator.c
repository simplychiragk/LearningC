#include <stdio.h>

int main() {

    int firstnumber, secondnumber, result, operation;
    char choice[4];    // To store user choice for continuing or exiting

    do {
        // Ask user for the first number
        printf("Please enter the first number\n");
        scanf("%d", &firstnumber);

        // Ask user for the second number
        printf("Please enter the second number\n");
        scanf("%d", &secondnumber);

        // Show operation options to the user
        printf("Please enter the operation you want to perform\n");
        printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for modulus\n");

        // Read the chosen operation
        scanf("%d", &operation);

        // Perform operation based on user input
        switch (operation) {
            case 1:
                result = firstnumber + secondnumber;
                printf("The result of addition is: %d\n", result);
                break;
            case 2:
                result = firstnumber - secondnumber;
                printf("The result of subtraction is: %d\n", result);
                break;
            case 3:
                result = firstnumber * secondnumber;
                printf("The result of multiplication is: %d\n", result);
                break;
            case 4:
                // Check for division by zero
                if (secondnumber != 0) {
                    result = firstnumber / secondnumber;
                    printf("The result of division is: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                // Check for modulus by zero
                if (secondnumber != 0) {
                    result = firstnumber % secondnumber;
                    printf("The result of modulus is: %d\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                // If operation is invalid
                printf("Invalid operation selected. Please choose a valid operation.\n");
                break;
        }

        // Thank user for using the calculator
        printf("Thank you for using the calculator!\n");

        // Ask if user wants to go again
        printf("Do You want to perform another operation? (yes/no)\n");
        scanf("%s", choice);

    // Repeat loop if user says yes (y or Y)
    } while (choice[0] == 'y' || choice[0] == 'Y');

    return 0;
}
