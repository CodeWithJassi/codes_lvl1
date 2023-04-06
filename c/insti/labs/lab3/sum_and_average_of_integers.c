#include <stdio.h>
int main(){
    int num_of_num; //number of numbers to be added and to be averaged
    int counter = 1;
    float number; 
    float sum = 0;
    float average;

    puts("How many numbers do you want to take sum and averaged?");
    while(1){
        scanf("%d", &num_of_num);
        if (num_of_num > 0)
        {
            break;
        }
        else
        {
            printf("Enter valid number \nEnter the number again \n > ");
        }
    }
    printf("\nEnter the numbers");

    while (counter <= num_of_num)
    {
        printf("\n > ");
        scanf("%f", &number);
        sum += number;
        counter++;
    }

    average = sum / num_of_num;

    printf("\nThe sum of number is %0.2f\n", sum);
    printf("\nThe average of number is %0.2f\n", average);    
    

    return 0;
}