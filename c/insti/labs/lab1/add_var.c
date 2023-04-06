#include <stdio.h>

int main(){
    int a,b;
    printf("please enter 1st number \n");
    printf("> ");
    scanf("%d", &a);
    printf("\n");
    printf("please enter 2nd number \n");
    printf("> ");
    scanf("%d", &b);
    printf("\n");
    int sum; 
    sum = a + b;
    printf("sum of two numbers is %d\n ", sum );
    return 0;


}