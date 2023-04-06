#include <stdio.h>
int main(){
     int i = 1;
    // while(i <= 10)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    do
    {
        if(i == 1)
        {
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    } while (i <= 10);
    
    return 0;
}