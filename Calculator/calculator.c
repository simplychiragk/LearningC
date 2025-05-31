#include <stdio.h>
int main(){

    int firstnumber,secondnumber, result;
   
    printf("please enter the first number\n");
    scanf("%d", &firstnumber);
    printf("please enter the second number\n");
    scanf("%d", &secondnumber);
    printf("please enter the operation you want to perform\n");
    printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for modulus\n");
    int operation;
    scanf("%d", &operation);
    if (operation == 1){
        result = firstnumber + secondnumber;
        printf("The result of the addition is %d\n", result);
    }
    else if (operation == 2){
        result = firstnumber - secondnumber;
        printf("The result of the subtraction is %d\n", result);
    }
    else if (operation == 3){
        result = firstnumber * secondnumber;
        printf("The result of the multiplication is %d\n", result);
    }
    else if (operation == 4){
        if (secondnumber != 0){
            result = firstnumber / secondnumber;
            printf("The result of the division is %d\n", result);
        }
        else{
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else if (operation == 5){
        result = firstnumber % secondnumber;
        printf("The result of the modulus is %d\n", result);
    }
    else{
        printf("Invalid operation selected.\n");
    }
    return 0;
}