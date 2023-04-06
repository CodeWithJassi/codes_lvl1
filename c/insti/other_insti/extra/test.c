#include <stdio.h>

int a = 50; // global_variable

void main()
{
    int a = 10; // local_variable
    {
        int a = 20; // local_in_scope_variable 
        printf("the local variable defined in a scope is this %d\n", a);
    }

    printf("the local variable defined in the main function is this %d\n", a);

    {
        extern int a;
        printf("the global variable defined outside functions is this %d\n", a);
    }
}
