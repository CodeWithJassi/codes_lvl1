#include <stdio.h>
int main(){
    float gross_sale;
    float salary;
    

    while(1){
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &gross_sale);

        if (gross_sale == -1)
            break;
        if (gross_sale < 0){
            puts("Sales can't be negative!! \n ");
            continue;
        }

        salary = (200 + (0.09 * gross_sale));

        printf("Salary is: $%0.2f \n \n", salary);
    }


    return 0;
}