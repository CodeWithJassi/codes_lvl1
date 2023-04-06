#include <stdio.h>
int main(){
    int num = 361152; // for an integer >= 2
    int i = 2;
    printf("Prime factorization of %d is ", num);
    while(i <= num){
        if((num % i) == 0)
        {
            printf("%d ", i);
            num /= i;
        }
        else
        i++;
    }
    return 0;
}