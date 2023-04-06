#include <stdio.h>
int main(){
    int break_point = 5;
    for(int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if(i == break_point)
        i = 10;
    }
    return 0;
}