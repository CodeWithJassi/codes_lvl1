#include <stdio.h>
int main(){

    int num;
    int sum = 0;
    int sum_of_square = 0;
    int sum_of_cubes = 0;

    printf("Enter the number:");
    scanf("%d", &num);

    int i = 1;
    while(i <= num)
    {
        sum += i;
        sum_of_square += i*i;
        sum_of_cubes += i*i*i;
        i++;
    }

    printf("\nSum of the numbers is %d", sum);
    printf("\nSum of the squares of numbers is %d", sum_of_square);
    printf("\nSum of the cubes of numbers is %d", sum_of_cubes);  

    return 0;
}