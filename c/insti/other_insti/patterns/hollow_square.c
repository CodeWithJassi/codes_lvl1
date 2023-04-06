#include <stdio.h>
int main(){

    int side_length;
    printf("Enter a number: ");
    scanf("%d", &side_length);

    int row = 1;
    while(row <= side_length)
        {
            int column = 1;
            while(column <= side_length)
                {

                    if( (row == 1) || (column == 1) || (row == side_length) || (column == side_length))
                        {
                            printf("* ");
                        }
                    else
                        {
                            printf("  ");
                        }

                    column++;
                }


            puts("");
            row++;

        }


    return 0;
}