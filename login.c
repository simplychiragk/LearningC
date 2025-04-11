#include <stdio.h>
int main(){
printf("Welcome to the \"Basic Login Page\"\n");
printf("Please enter how excited you are on a scale of 1-10\n");
printf("1 being not excited at all and 10 being extremely excited\n");
int lvl;
scanf("%d", &lvl);
if (lvl>=1 && lvl<5){
    printf("You are not very excited, but that's okay!\n");
}
else if (lvl>=5 && lvl<8){
    printf("You are moderately excited, that's great!\n");
}
else if (lvl>=8 && lvl<=10){
    printf("You are extremely excited, that's awesome!\n");
}
else{
    printf("Invalid input. Please enter a number between 1 and 10.\n");
}
int username, password;
printf("Please enter your username:\n");
scanf(%d &username);
printf("Please enter your password:\n");
scanf(%d &password);
if (username == 1234 && password == 5678){
    printf("Login successful! Welcome!\n");
    printf("\n Thanks For Trying Out One Of my First Projects on C!");
}
else if (username == 1234 && password != 5678){
    printf("Incorrect password. Please try again.\n");
    printf("Please run the code again, and enter the correct credentials");
}
else if (username != 1234 && password == 5678){
    printf("Incorrect username. Please try again.\n");
    printf("\nPlease run the code again, and enter the correct credentials");
}
else{
    printf("Incorrect username and password. Please try again.\n");
    printf("\nPlease run the code again, and enter the correct credentials");
    return 0;
}
