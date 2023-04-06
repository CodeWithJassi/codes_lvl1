#include <stdio.h>
int main(){
    int num1;
    int num2; 
    int num3;

    printf("enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Sum is %d\n", num1 + num2 + num3);
    printf("Average is %d\n", (num1 + num2 +num3)/3);
    printf("Product is %d\n", num1 * num2 * num3);
    if (num1 <= num2 && num1 <= num3 )
    {
        printf("Smallest number is %d\n", num1);
    }
    else if (num2 <= num1 && num2 <= num3 )
    {
        printf("Smallest number is %d\n", num2);
    }
    else if (num3 <= num2 && num3 <= num1 )
    {
        printf("Smallest number is %d\n", num3);
    }

    if (num1 >= num2 && num1 >= num3 )
    {
        printf("Largest number is %d\n", num1);
    }
    else if (num2 >= num1 && num2 >= num3 )
    {
        printf("Largest number is %d\n", num2);
    }
    else if (num3 >= num2 && num3 >= num1 )
    {
        printf("Largest number is %d\n", num3);
    }


    return 0;
}


