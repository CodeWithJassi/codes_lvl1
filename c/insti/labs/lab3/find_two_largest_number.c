#include <stdio.h>
int main(){

    int counter = 1;
    int number;
    int largest = 0;
    int second_largest = 0;

    puts("Enter the sale of salesman");
    
    while(counter <= 10)
    {
        printf(" > ");
        scanf("%d", &number);
        if (number >= 0)
        {
            if (number > largest)
            {
                second_largest = largest;
                largest = number;
            }
            else if (number > second_largest)
            {
                second_largest = number;
            }
            counter++;
        }
        else
        {
            puts("sales can't be negative");
        }


    }

    printf("The largest number is %d\n", largest);
    printf("The second largest number is %d", second_largest);

    return 0;
}