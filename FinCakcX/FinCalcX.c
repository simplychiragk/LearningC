#include <stdio.h>
#include <math.h>

int main() {
    int continueProgram;

    printf("Welcome to FinCalcX!\n");
    printf("This is a simple financial calculator.\n");

    do {
        printf("\nChoose an option:\n");
        printf("1. Home Loan Calculator\n");   
        printf("2. Car Loan Calculator\n");
        printf("3. Personal Loan Calculator\n");
        printf("4. SIP Calculator\n");
        printf("5. Exit\n");

        int choice;
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: {
                printf("You chose Home Loan Calculator.\n");
                printf("Enter Loan Amount: ");  
                double homeLoanAmount;
                scanf("%lf", &homeLoanAmount);

                printf("Enter Interest Rate (annual percentage, e.g., 6): ");
                double homeInterestRate;
                scanf("%lf", &homeInterestRate);

                printf("Enter Loan Tenure (in years): ");
                double homeLoanTenure;
                scanf("%lf", &homeLoanTenure);

                double monthlyRate = (homeInterestRate / 12) / 100;
                double tenureInMonths = homeLoanTenure * 12;

                double homeEmi = (homeLoanAmount * monthlyRate * pow(1 + monthlyRate, tenureInMonths)) / (pow(1 + monthlyRate, tenureInMonths) - 1);

                printf("Your Home Loan EMI is: %.2f\n", homeEmi);
                break;
            }

            case 2: {
                printf("You chose Car Loan Calculator.\n");
                printf("Enter Car Loan Amount: ");  
                double carLoanAmount;
                scanf("%lf", &carLoanAmount);

                printf("Enter Interest Rate (annual percentage, e.g., 6): ");
                double carInterestRate;
                scanf("%lf", &carInterestRate);

                printf("Enter Loan Tenure (in years): ");
                double carLoanTenure;
                scanf("%lf", &carLoanTenure);

                double carMonthlyRate = (carInterestRate / 12) / 100;
                double carTenureInMonths = carLoanTenure * 12;

                double carEmi = (carLoanAmount * carMonthlyRate * pow(1 + carMonthlyRate, carTenureInMonths)) / (pow(1 + carMonthlyRate, carTenureInMonths) - 1);

                printf("Your Car Loan EMI is: %.2f\n", carEmi);
                break;
            }

            case 3: {
                printf("You chose Personal Loan Calculator.\n");
                printf("Enter Personal Loan Amount: ");  
                double personalLoanAmount;
                scanf("%lf", &personalLoanAmount);

                printf("Enter Interest Rate (annual percentage, e.g., 6): ");
                double personalInterestRate;
                scanf("%lf", &personalInterestRate);

                printf("Enter Loan Tenure (in years): ");
                double personalLoanTenure;
                scanf("%lf", &personalLoanTenure);

                double personalMonthlyRate = (personalInterestRate / 12) / 100;
                double personalTenureInMonths = personalLoanTenure * 12;

                double personalEmi = (personalLoanAmount * personalMonthlyRate * pow(1 + personalMonthlyRate, personalTenureInMonths)) / (pow(1 + personalMonthlyRate, personalTenureInMonths) - 1);

                printf("Your Personal Loan EMI is: %.2f\n", personalEmi);
                break;
            }

            case 4: {
                printf("You chose SIP Calculator.\n");
                printf("Enter Monthly SIP Amount: ");
                double sipAmount;
                scanf("%lf", &sipAmount);

                printf("Enter Expected Annual Return Rate (in percentage, e.g., 12): ");
                double sipAnnualRate;
                scanf("%lf", &sipAnnualRate);

                printf("Enter Number of Years: ");
                double sipYears;
                scanf("%lf", &sipYears);

                double sipMonthlyRate = sipAnnualRate / 12 / 100;
                double sipMonths = sipYears * 12;

                double futureValue = sipAmount * (pow(1 + sipMonthlyRate, sipMonths) - 1) / sipMonthlyRate;

                printf("The Future Value of your SIP after %.0f years is: %.2f\n", sipYears, futureValue);
                break;
            }

            case 5:
                printf("Thank you for using FinCalcX! Goodbye!\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }

        // Ask if user wants to continue
        printf("\nDo you want to perform another calculation? (1 for yes / 0 for no): ");
        scanf("%d", &continueProgram);

    } while(continueProgram == 1);

    printf("Thank you for using FinCalcX! Goodbye!\n");
    return 0;
}
