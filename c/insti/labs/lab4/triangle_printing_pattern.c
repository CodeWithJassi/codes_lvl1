#include <stdio.h>
int main(){
    int pattern = 1;
    int size = 10;
    int num_switches = 4; // number of switche cases
    for(int i = 1; i <= size; i++)
    {

        for(int j = 1; j <= size; j++)
        {
            switch (pattern)
            {
            case 1:
                if(j <= i)
                printf("*");
                else
                printf(" ");
                break;

            case 2:
                if(j <= size - i + 1)
                printf("*");
                else
                printf(" ");
                break;

            case 3:
                if(j < i)
                printf(" ");
                else
                printf("*");
                break;

            case 4:
                if(j < size - i + 1)
                printf(" ");
                else
                printf("*");
                break;
            
            default:
                break;
            }

        }
        puts("");

        if (( i == size ) && ( pattern < num_switches))
        {
            i = 0;
            pattern++;
            puts("");
        }
    }
    return 0;
}