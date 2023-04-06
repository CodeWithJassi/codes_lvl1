#include <stdio.h>
int main(){
    int side;

    printf("Enter the value of side of square: ");
    scanf("%d", &side);
    
    int i = 1;
    while (i <= side)
    {
        int j = 1;
        while (j <= side)
        {
            if (((i==1)||(j==1))||((i==side)||(j==side))){
                printf("*");
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}