#include <stdio.h>

int var_in_global = 100;

int func(){
    int var_in_func = 200;
    printf("hello from func\n");
    // printf("%d", var_in_main); // will not work

    return 0;
}


int main(){

    int var_in_main = 300;

    for (int var_in_loop = 1; var_in_loop <= 10; var_in_loop++)
    {
        int var_in_in_loop = 5;
        continue;
    }
    printf("%d", var_in_global);
    // printf("%d", var_in_func); // will not work
    printf("%d", var_in_main); // works
    // printf("%d", var_in_loop); // will not work
    // printf("%d", var_in_in_loop); // will not work
    
    return 0;
}