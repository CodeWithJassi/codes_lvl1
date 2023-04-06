#include <stdio.h>
int main(){
    float principle;
    float rate;
    int days;
    float interest_charge;


    while(1){
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principle);

        if (principle == -1){
            break;
        }
        else if (principle <= 0){
            puts("Wrong input!! \n");
            continue;
        }
        else
        {
            printf("Enter interest rate: ");
            scanf("%f", &rate);

            printf("Enter term of the loan in days: ");
            scanf("%d", &days);

            interest_charge = (principle * rate * days / 365);

            printf("The interest charge is $%0.2f", interest_charge);
            puts("\n");
        }
    }






    return 0;
}