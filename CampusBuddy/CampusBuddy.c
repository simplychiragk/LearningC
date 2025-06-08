#include <stdio.h>
#include <stdlib.h>

int main() {
    char name[50];
    int choice_main;

    printf("🎓 Welcome to Campus Buddy!\n");
    printf("This CLI tool helps you manage grades, attendance, and books with ease.\n\n");

    printf("Enter your name: ");
    scanf("%s", name);

    printf("\nHello, %s! Let's get started.\n", name);

    do {
        // Main menu
        printf("\n📋 Main Menu:\n");
        printf("1. Course Grade Calculator\n");
        printf("2. Attendance Tracker\n");
        printf("3. Library Manager\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice_main);

        switch (choice_main) {
            case 1: {
                printf("\n📘 Course Grade Calculator\n");

                int marks[5], total = 0;
                int i = 0;

                do {
                    printf("Enter marks for subject %d: ", i + 1);
                    scanf("%d", &marks[i]);
                    total += marks[i];
                    i++;
                } while (i < 5);

                float average = total / 5.0;

                printf("\nGrade Summary for %s:\n", name);

                i = 0;
                do {
                    printf("Subject %d: %d\n", i + 1, marks[i]);
                    i++;
                } while (i < 5);

                printf("Total Marks: %d\n", total);
                printf("Average Marks: %.2f\n", average);

                if (average >= 90)
                    printf("🎓 Grade: A\n");
                else if (average >= 80)
                    printf("🎓 Grade: B\n");
                else if (average >= 70)
                    printf("🎓 Grade: C\n");
                else if (average >= 60)
                    printf("🎓 Grade: D\n");
                else
                    printf("🎓 Grade: F\n");
                break;
            }

            case 2: {
                printf("\n📅 Attendance Tracker\n");

                int total_classes, attended;
                printf("Enter total classes held: ");
                scanf("%d", &total_classes);
                printf("Enter classes attended: ");
                scanf("%d", &attended);

                if (attended > total_classes) {
                    printf("❌ Error: Attended classes can't be more than total classes.\n");
                } else {
                    float percentage = (attended / (float)total_classes) * 100;
                    printf("\nAttendance Summary for %s:\n", name);
                    printf("Attendance: %.2f%%\n", percentage);
                    if (percentage >= 75)
                        printf("✅ You're safe. Keep attending!\n");
                    else
                        printf("⚠️ You're short on attendance! Bunk less 😭\n");
                }
                break;
            }

            case 3: {
                printf("\n📚 Library Manager\n");

                int days_issued, days_used;
                printf("Days book was issued for: ");
                scanf("%d", &days_issued);
                printf("Days you've already used it: ");
                scanf("%d", &days_used);

                if (days_used > days_issued) {
                    printf("❌ Error: Used days can't exceed issued days.\n");
                } else {
                    int remaining = days_issued - days_used;
                    printf("\nLibrary Summary for %s:\n", name);
                    printf("Remaining Days: %d\n", remaining);
                    if (remaining > 0)
                        printf("📖 Return the book in %d days. Don't forget!\n", remaining);
                    else
                        printf("📖 The book is overdue! Return ASAP.\n");
                }
                break;
            }

            case 4:
                printf("\n👋 Exiting... Bye %s! Stay smart, stay sharp!\n", name);
                break;

            default:
                printf("❗ Invalid choice. Try again.\n");
        }

    } while (choice_main != 4);

    return 0;
}
