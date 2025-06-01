#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Welcome to Campus Buddy!\n");
    printf("CampusBuddy helps college students manage grades, attendance, tasks, and books — all from one CLI app.\n");
    printf("This project is developed in C.\n");

    printf("Enter your name: ");
    char name[50]; 
    scanf("%s", name);
    
    printf("Hello, %s! Let's get started.\n", name);
    printf("Enter 1 to view the main menu.\n");

    int choice_main;
    scanf("%d", &choice_main);

    if (choice_main == 1) {
        printf("Main Menu:\n");
        printf("1. Course Grade Calculator\n");
        printf("2. Attendance Tracker\n");
        printf("3. Library Manager\n");
        printf("4. Exit\n");
    } else {
        printf("Invalid choice. Please restart the application.\n");
        return 0;
    }

    int choice_sub;
    printf("Enter your choice: ");
    scanf("%d", &choice_sub);

    if (choice_sub == 1) {
        printf("You selected Course Grade Calculator.\n");
        printf("This feature allows you to calculate your grades for different subjects.\n");

        int marks1, marks2, marks3, marks4, marks5;
        printf("Enter marks for first subject: ");
        scanf("%d", &marks1);
        printf("Enter marks for second subject: ");
        scanf("%d", &marks2);
        printf("Enter marks for third subject: ");
        scanf("%d", &marks3);
        printf("Enter marks for fourth subject: ");
        scanf("%d", &marks4);
        printf("Enter marks for fifth subject: ");
        scanf("%d", &marks5); 

        printf("Calculating your overall grade...\n");

        int total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
        float average = total_marks / 5.0;

        printf("Grade Summary for %s:\n", name);
        printf("Subject 1: %d\n", marks1);
        printf("Subject 2: %d\n", marks2);  
        printf("Subject 3: %d\n", marks3);
        printf("Subject 4: %d\n", marks4);
        printf("Subject 5: %d\n", marks5);
        printf("Total Marks: %d\n", total_marks);
        printf("Average Marks: %.2f\n", average);

        if (average >= 90) {
            printf("🎓 Grade: A\n");
        } else if (average >= 80) {
            printf("🎓 Grade: B\n");
        } else if (average >= 70) {
            printf("🎓 Grade: C\n");
        } else if (average >= 60) {
            printf("🎓 Grade: D\n");
        } else {
            printf("🎓 Grade: F\n");
        }

    } else if (choice_sub == 2) {
        printf("You selected Attendance Tracker.\n");
        printf("This feature allows you to track your attendance.\n");	

        int total_classes, attended_classes;
        printf("Enter total classes held: ");
        scanf("%d", &total_classes);
        printf("Enter total classes attended: ");
        scanf("%d", &attended_classes);

        if (attended_classes > total_classes) {
            printf("Error: Attended classes cannot exceed total classes held.\n");
        } else {
            float attendance_percentage = (float)attended_classes / total_classes * 100;

            printf("Attendance Summary for %s:\n", name);
            printf("Total Classes Held: %d\n", total_classes);
            printf("Total Classes Attended: %d\n", attended_classes);
            printf("Attendance Percentage: %.2f%%\n", attendance_percentage);

            if (attendance_percentage >= 75) {  
                printf("✅ Attendance Status: You are safe! Keep it up.\n");
            } else {
                printf("❗ Attendance Status: ⚠️ You are falling short! Bunk less, dawg 😭\n");
            }
        }

    } else if (choice_sub == 3) {
        printf("You selected Library Manager.\n");
        printf("This feature allows you to manage your library issued books and stuff.\n");

        int days_issued, days_used;
        printf("Enter the number of days you issued the book for: ");
        scanf("%d", &days_issued);
        printf("Enter the number of days you have already used the book: ");
        scanf("%d", &days_used);

        if (days_used > days_issued) {
            printf("Error: Days used cannot exceed days issued.\n");
        } else {
            int remaining_days = days_issued - days_used;

            printf("Library Summary for %s:\n", name);
            printf("Days Issued: %d\n", days_issued);
            printf("Days Used: %d\n", days_used);
            printf("Remaining Days: %d\n", remaining_days);

            if (remaining_days > 0) {
                printf("📚 You have %d days left to return the book. Don't forget to return it on time!\n", remaining_days);
            } else {
                printf("📚 The book is overdue! Please return it as soon as possible.\n");
            }
        }

    } else if (choice_sub == 4) {
        printf("Exiting the application. Goodbye!\n");
    } else {
        printf("Invalid choice. Please restart the application.\n");
    }

    return 0;
}
