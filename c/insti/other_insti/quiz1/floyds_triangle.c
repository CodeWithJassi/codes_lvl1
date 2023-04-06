#include <stdio.h>

int main()
{
    int row;
    int counter = 1;
    int num = 1;
    int column = 1;

    printf("enter a number : ");
    scanf("%d", &row);

    while(counter <= row)
    {
        column = 1;
        while(column <= counter){
            printf("%d\t", num);
            num++;
            column++;
        }
        puts("");
        counter++;
    }
}