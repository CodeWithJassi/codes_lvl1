#include <stdio.h>
int main(){
    int outer_count = 1;
    while(outer_count <= 10)
    {
        int inner_count = 1;
        while(inner_count <= outer_count){
            printf("%S", "*");
            inner_count++;}
        printf("\n");
        outer_count++;

    }
}