#include <stdio.h>
#include <string.h>
#include <stlib.h>

int main() {
    char username[30];
    char password[30];

    printf("Welcome to LiftyLog! 💪\n");
    printf("Please enter your username: ");
    scanf("%29s", username);
    printf("Please enter your password: ");
    scanf("%29s", password);

    if (strcmp(username, "chirag") == 0 && strcmp(password, "chirag") == 0) {
        printf("Login successful! Let's get those gains!\n");
    } else {
        printf("Login failed! Try again, champ.\n");
        return 0;
    }

    // User data input starts here
    float weight, height, bmr, maintenance_cals;
    int age, activity_level, goal;
    char gender;

    printf("Let's get to know you better!\n");
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Enter your height (cm): ");
    scanf("%f", &height);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    printf("Choose your activity level:\n");
    printf("1 - Sedentary (little/no exercise)\n");
    printf("2 - Lightly active (light exercise 1-3 days/week)\n");
    printf("3 - Moderately active (moderate exercise 3-5 days/week)\n");
    printf("4 - Very active (hard exercise 6-7 days/week)\n");
    printf("5 - Extra active (very hard exercise or physical job)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &activity_level);

    // Calculate BMR
    if (gender == 'M' || gender == 'm') {
        bmr = 10 * weight + 6.25 * height - 5 * age + 5;
    } else {
        bmr = 10 * weight + 6.25 * height - 5 * age - 161;
    }

    // Calculate maintenance calories based on activity level
    
if (activity_level == 1) {
        maintenance_cals = bmr * 1.2;
    } else if (activity_level == 2) {
        maintenance_cals = bmr * 1.375;
    } else if (activity_level == 3) {
        maintenance_cals = bmr * 1.55;
    } else if (activity_level == 4) {
        maintenance_cals = bmr * 1.725;
    } else if (activity_level == 5) {
        maintenance_cals = bmr * 1.9;
    } else {
        printf("Invalid activity level selected.\n");
        return 0;
    }
   

    printf("Your BMR is: %.2f calories/day\n", bmr);
    printf("Your maintenance calories are: %.2f calories/day\n", maintenance_cals);
    printf("Now, let's set your fitness goal!\n");
    printf("Choose your goal:\n");
    printf("1 - Lose weight\n");
    printf("2 - Maintain weight\n");
    printf("3 - Gain weight\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &goal);
    if (goal == 1) {
        printf("To lose weight, aim for a calorie deficit of 500-1000 calories/day.\n");
        printf("Recommended daily intake: %.2f - %.2f calories/day\n", maintenance_cals - 1000, maintenance_cals - 500);
    } else if (goal == 2) {
        printf("To maintain weight, stick to your maintenance calories: %.2f calories/day\n", maintenance_cals);
    } else if (goal == 3) {
        printf("To gain weight, aim for a calorie surplus of 250-500 calories/day.\n");
        printf("Recommended daily intake: %.2f - %.2f calories/day\n", maintenance_cals + 250, maintenance_cals + 500);
    } else {
        printf("Invalid goal selected.\n");
        return 0;
    }

}
