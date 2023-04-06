#include <stdio.h>
int main(){

    int counter = 1;
    int number;
    int largest = 0;

    puts("Enter the sale of salesman");
    
    while(counter <= 10)
    {
        printf(" > ");
        scanf("%d", &number);
        if (number >= 0)
        {
            if (number > largest)
            {
                largest = number;
            }
            counter++;
        }
        else
        {
            puts("sales can't be negative");
        }


    }

    printf("The largest number is %d", largest);

    return 0;
}