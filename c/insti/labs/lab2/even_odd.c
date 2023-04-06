#include <stdio.h>
int main(){
    int num;


    printf("enter the number\n > ");
    scanf("%d", &num);
    
    if (num % 2 == 0)
    {
        printf("num is an even number");
    }
    else
    {
        printf("num is an odd number");
    }


    return 0;
}