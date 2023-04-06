#include <stdio.h>
int main(){

    int num_row; // number of rows

    for(int i = 1; 1; 1)
    {
        printf("Enter the number of rows : ");
        scanf("%d", &num_row);  
        if(((num_row % 2) == 1) && (num_row >= 1) && (num_row <= 19))
        break;
        else
        puts("Enter an odd number between 1 to 19");
    }



    int size = (num_row + 1)/2;
    int tip = 0; // if tip == 0 then print upper part of diamond(triangle) and if tip == 1 then print lower part of diamond(triangle)
    for(int i = 1; i <= size; i++)
    {
        for(int j = 1; j <= 2 * size + 1; j++)
        {
            if(tip == 0)
            {
                if((j >= size - i + 1) && (j <= size + i - 1))
                printf("*");
                else
                printf(" ");
            }
            if(tip == 1)
            {
                if((j >= i) && (j <= 2 * size - i ))
                printf("*");
                else
                printf(" ");
            }            
        }

        puts("");

        if((i == size) && (tip == 0))
        {
            i = 1;
            tip++;
        }

    }
    return 0;
}