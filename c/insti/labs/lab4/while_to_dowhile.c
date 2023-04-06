#include <stdio.h>
int main(){
    int i = 1;
    //do // do while loop that is converterted to while loop
    // {
    //     printf("%d\n", i);
    //     i++;
    // } while (i >= 10);
    
    // return 0;

    int temp = 1;

    while((i >= 10)||(temp == 1))
    {
        printf("%d\n", i);
        i++;
        temp = 0;
    }


}