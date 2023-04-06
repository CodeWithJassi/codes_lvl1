#include <stdio.h>
int main(){

    int num;
    int sum = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    int i = 1;
    while(i <= 100)
    {
        if ((i % num) == 0)
        {
            sum += i;
        }
        i++;

    }

    printf("Sum of the multiples is %d", sum);
    return 0;
}