#include <stdio.h>
int main(){
    int num1;
    int num2; 

    printf("enter the first number\n > ");
    scanf("%d", &num1);
    printf("enter the second number\n > ");
    scanf("%d", &num2);
    printf("the sum of two numbers is %d\n", num1 + num2);
    printf("the difference of two numbers is %d\n", num1 - num2);
    printf("the product of two numbers is %d\n", num1 * num2);
    printf("the quotient of two numbers is %d\n", num1 / num2);
    printf("the remainder of two numbers is %d\n", num1 % num2);


    return 0;
}