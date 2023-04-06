#include <stdio.h>
int main(){
    int code;
    double mang_salary = 50000.00; // manager's salary
    int num_hours; // number of hours, hourly working works
    double hw_salary = 500.00; // salary of hourly worker for regular hours
    double gross_sale; // gross weekly sale 
    int num_product; // number of product produced
    double money_per_prod = 80.00; // money a peiceworker makes from a product

    puts("Enter the code according to the employment\n");
    puts("1 : manager");
    puts("2 : hourly worker");
    puts("3 : commission worker");
    puts("4 : pieceworkers");
    printf("\nEnter the code : ");
    scanf("%d", &code);

    if(code == 1)
        printf("\nYour weekly pay is $%0.2lf\n", mang_salary);    
    if(code == 2)
    {
        printf("Enter the total number of hours you work(i.e. regular + overtime) : ");
        scanf("%d", &num_hours);
        printf("\nYour weekly pay is $%0.2lf\n", 40 * hw_salary + (num_hours - 40) * 1.5 * hw_salary);
    }
    if(code == 3)
    {
        printf("Enter your gross weekly sales : ");
        scanf("%lf", &gross_sale);
        printf("\nYour weekly pay is $%0.2lf\n", 250 + 0.057 * gross_sale);
    }
    if(code == 4)
    {
        printf("Enter the number of products you produced : ");
        scanf("%d", &num_product);
        printf("\nYour weekly pay is $%0.2lf\n", num_product * money_per_prod);        
    }
    if(!((code == 1) || (code == 2) || (code == 3) || (code == 4)))
        puts("You entered the wrong code");
    return 0;
}