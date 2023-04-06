#include <stdio.h>
int main(){
    int num1;
    int num2; 

    printf("########## INSTRUCTIONS ##########\n____Enter first and second number and the programm will return wether first number is multiple of second number or not____\n\n");
    printf("enter the first number\n > ");
    scanf("%d", &num1);
    printf("enter the second number\n > ");
    scanf("%d", &num2);
    if (num1 % num2 == 0) {

        printf("%d is the multiple of %d", num1, num2);
    }
    else{
        printf("%d is not the multiple of %d", num1, num2);

    }

    return 0;
}
