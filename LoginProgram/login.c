#include <stdio.h>

int main() {
    // Print a welcome message for the Basic Login Page
    printf("Welcome to the \"Basic Login Page\"\n");
    
    // Ask user for their excitement level on a scale of 1-10
    printf("Please enter how excited you are on a scale of 1-10\n");
    printf("1-4 being not very excited, 5-7 being moderately excited, 8-10 being extremely excited\n");
    
    // Declare variable to store excitement level
    int lvl;
    // Read the excitement level from user input
    scanf("%d", &lvl);
    
    // Check excitement level and print appropriate message
    if (lvl >= 1 && lvl < 5) {
        printf("You are not very excited, but that's okay!\n");
    }
    else if (lvl >= 5 && lvl < 8) {
        printf("You are moderately excited, that's great!\n");
    }
    else if (lvl >= 8 && lvl <= 10) {
        printf("You are extremely excited, that's awesome!\n");
    }
    else {
        printf("Invalid input. Please enter a number between 1 and 10.\n");
    }
    
    // Declare variables for username and password
    int username, password;
    
    // Prompt user to enter username
    printf("Please enter your username:\n");
    // Read username from user input
    scanf("%d", &username);
    
    // Prompt user to enter password
    printf("Please enter your password:\n");
    // Read password from user input
    scanf("%d", &password);
    
    // Check if username and password are correct (1234 and 5678)
    if (username == 1234 && password == 5678) {
        printf("Login successful! Welcome!\n");
        printf("\nThanks For Trying Out One Of my First Projects on C!\n");
    }
    // Check if username is correct but password is wrong
    else if (username == 1234 && password != 5678) {
        printf("Incorrect password. Please try again.\n");
        printf("\nPlease run the code again, and enter the correct credentials\n");
    }
    // Check if username is wrong but password is correct
    else if (username != 1234 && password == 5678) {
        printf("Incorrect username. Please try again.\n");
        printf("\nPlease run the code again, and enter the correct credentials\n");
    }
    // Handle case where both username and password are wrong
    else {
        printf("Incorrect username and password. Please try again.\n");
        printf("\nPlease run the code again, and enter the correct credentials\n");
    }
    
    // Return 0 to indicate successful program completion
    return 0;
}
