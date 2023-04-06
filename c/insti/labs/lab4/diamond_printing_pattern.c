#include <stdio.h>
int main(){
    int size = 5;
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