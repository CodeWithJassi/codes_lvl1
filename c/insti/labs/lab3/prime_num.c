#include <stdio.h>
int main(){

    int num;
    int number_of_factors = 0; // count of factors on number
    int i;

    while(1)
    {
    printf("Enter a number (-1 to exit): ");
    scanf("%d", &num);

    if (num == -1)
    {
        puts("exiting....\n");
        break;
    }
    else if (num <= 0)
    {
        puts("prime number concept is not defined for this number\n");
        continue;
    }
    else if (num == 1)
    {
        puts("1 is niether a prime nor a composite number\n");
        continue;
    }
    else
    {
        i = 1;
        while(i <= num)
        {
            if ((num % i) == 0)
            {
                number_of_factors++;
            }
            i++;
        }
    }


    if (number_of_factors == 2)
    {
        printf("%d is a prime number \n", num);
    }
    else if (number_of_factors >= 2)
    {
        printf("%d is a composite number \n", num);
    }
    number_of_factors = 0;
    printf("\n");
    }

    return 0;

}