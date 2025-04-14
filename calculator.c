#include <stdio.h>
int main(){
    int firstnumber,secondnumber, result;
    printf("please enter the first number\n");
    scanf("%d", &firstnumber);
    printf("please enter the second number\n");
    scanf("%d", &secondnumber);
    printf("please enter the operation you want to perform\n");
    printf("1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n5 for remainder\n"); // note that "%" is modulus operator where its operation is remainder.
    int operation;
    scanf("%d", &operation);
 switch (operation) {
  case 1:
    result = firstnumber + secondnumber;
    printf("the result of the addition is %d\n", result);
    break;
  case 2:
    result = firstnumber - secondnumber;
    printf("the result of subtraction is %d\n", result);
    break;
  case 3:
    result = firstnumber * secondnumber;
    printf("the result of multiplication is %d\n", result);
    break;
  case 4:
    operation == 0 ? (printf("Division by zero is not allowed\n")) : (result = firstnumber/secondnumber,printf("the result of division is %d\n", result));
    break;
  case 5:
    result = firstnumber % secondnumber;
    printf("the remainder of the two numbers is %d\n", result);
    break;
  default:
    printf("invalid choice.\n");
   }  
 return 0;
}
