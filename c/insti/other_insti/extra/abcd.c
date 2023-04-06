#include <stdio.h>

int main()
{
    for(int i = 1; i <= 26; i++)
        printf("%d)\t%c \n", i, 64 + i);
    
    for(int i = 1; i <= 26; i++)
        printf("\n%d)\t%c",96 + i, 96 + i);
}