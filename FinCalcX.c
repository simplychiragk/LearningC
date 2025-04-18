#include <stdio.h>
#include <math.h>

int main() {
    // Welcome message and introduction to the program
    printf("Welcome to FinCalcX!\n");
    printf("This is a simple financial calculator.\n");

    int a;
    // Ask user to enter 1 to continue
    printf("Enter 1 to continue: "); 
    scanf("%d", &a);

    // If user enters 1, show the available options
    if (a == 1) {
        printf("Choose an option:\n");
        printf("1. Home Loan Calculator\n");   
        printf("2. Car Loan Calculator\n");
        printf("3. Personal Loan Calculator\n");
        printf("4. SIP Calculator\n");
    } else {   
        // If the input is not 1, exit the program
        printf("Thank you for using FinCalcX!\n");
        printf("Exiting...\n");
        return 0;
    }

    int choice;
    // Ask user to select the type of loan or SIP
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Switch-case to handle the different options based on user choice
    switch(choice) {
        case 1: // Home Loan Calculator
            printf("You chose Home Loan Calculator.\n");
            printf("\nAll you have to do is enter the loan amount, interest rate and the loan tenure in years.\n");
            printf("The exact EMI value will be calculated and displayed within seconds.\n");

            // Declare variables for home loan details
            double homeLoanAmount, homeInterestRate, homeLoanTenure;
            printf("Enter Loan Amount: ");  
            scanf("%lf", &homeLoanAmount); // Use %lf for double input
            printf("Enter Interest Rate (annual percentage, e.g., 6): ");
            scanf("%lf", &homeInterestRate);
            printf("Enter Loan Tenure (in years): ");
            scanf("%lf", &homeLoanTenure);

            // Convert annual interest rate to monthly rate
            double monthlyRate = (homeInterestRate / 12) / 100;

            // Convert years to months
            double tenureInMonths = homeLoanTenure * 12;

            // EMI formula: [P * r * (1 + r)^n] / [(1 + r)^n - 1]
            double homeEmi = (homeLoanAmount * monthlyRate * pow(1 + monthlyRate, tenureInMonths)) / (pow(1 + monthlyRate, tenureInMonths) - 1);

            // Output the calculated EMI
            printf("Your Home Loan EMI is: %.2f\n", homeEmi);
            break;

        case 2: // Car Loan Calculator
            printf("You chose Car Loan Calculator.\n");
            printf("\nAll you have to do is enter the car loan amount, interest rate and the loan tenure in years.\n");
            printf("The exact EMI value will be calculated and displayed within seconds.\n");

            // Declare variables for car loan details
            double carLoanAmount, carInterestRate, carLoanTenure;
            printf("Enter Car Loan Amount: ");  
            scanf("%lf", &carLoanAmount); 
            printf("Enter Interest Rate (annual percentage, e.g., 6): ");
            scanf("%lf", &carInterestRate);
            printf("Enter Loan Tenure (in years): ");
            scanf("%lf", &carLoanTenure);

            // Convert annual interest rate to monthly rate
            double carMonthlyRate = (carInterestRate / 12) / 100;

            // Convert years to months
            double carTenureInMonths = carLoanTenure * 12;

            // EMI formula for car loan
            double carEmi = (carLoanAmount * carMonthlyRate * pow(1 + carMonthlyRate, carTenureInMonths)) / (pow(1 + carMonthlyRate, carTenureInMonths) - 1);

            // Output the calculated EMI
            printf("Your Car Loan EMI is: %.2f\n", carEmi);
            break;

        case 3: // Personal Loan Calculator
            printf("You chose Personal Loan Calculator.\n");
            printf("\nAll you have to do is enter the loan amount, interest rate and the loan tenure in years.\n");
            printf("The exact EMI value will be calculated and displayed within seconds.\n");

            // Declare variables for personal loan details
            double personalLoanAmount, personalInterestRate, personalLoanTenure;
            printf("Enter Personal Loan Amount: ");  
            scanf("%lf", &personalLoanAmount);
            printf("Enter Interest Rate (annual percentage, e.g., 6): ");
            scanf("%lf", &personalInterestRate);
            printf("Enter Loan Tenure (in years): ");
            scanf("%lf", &personalLoanTenure);

            // Convert annual interest rate to monthly rate
            double personalMonthlyRate = (personalInterestRate / 12) / 100;

            // Convert years to months
            double personalTenureInMonths = personalLoanTenure * 12;

            // EMI formula for personal loan
            double personalEmi = (personalLoanAmount * personalMonthlyRate * pow(1 + personalMonthlyRate, personalTenureInMonths)) / (pow(1 + personalMonthlyRate, personalTenureInMonths) - 1);

            // Output the calculated EMI
            printf("Your Personal Loan EMI is: %.2f\n", personalEmi);
            break;

        case 4: // SIP Calculator
            printf("You chose SIP Calculator.\n");
            printf("\nEnter the monthly SIP amount, expected annual return rate, and the number of years.\n");

            // Declare variables for SIP details
            double sipAmount, sipAnnualRate, sipYears;
            printf("Enter Monthly SIP Amount: ");
            scanf("%lf", &sipAmount);
            printf("Enter Expected Annual Return Rate (in percentage, e.g., 12): ");
            scanf("%lf", &sipAnnualRate);
            printf("Enter Number of Years: ");
            scanf("%lf", &sipYears);

            // Convert annual return rate to monthly rate
            double sipMonthlyRate = sipAnnualRate / 12 / 100;

            // Number of months
            double sipMonths = sipYears * 12;

            // SIP formula: FV = P * [(1 + r)^n - 1] / r
            double futureValue = sipAmount * (pow(1 + sipMonthlyRate, sipMonths) - 1) / sipMonthlyRate;

            // Output the future value of the SIP
            printf("The Future Value of your SIP after %.0f years is: %.2f\n", sipYears, futureValue);
            break;

        default: // Handle invalid choice
            printf("Invalid choice. Please try again.\n");
    }

    return 0;
}
