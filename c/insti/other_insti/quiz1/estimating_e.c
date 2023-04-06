#include <stdio.h>
#include <math.h>


double factorial(int num){
    int counter = 1;
    double result = 1;

    while(counter <= num)
    {
        result *= counter;
        counter++;
    }

    return result;
}


int main()
{   
    int accuracy;
    printf("enter accuracy(number) : ");
    scanf("%d", &accuracy);

    double counter = 1;
    double result = 1;
    while(counter <= accuracy)
    {
        result += 1.0/factorial(counter);
        counter++;

    }


    printf("The estimated value of e is %.10lf", result);

    return 0;
}