#include <stdio.h>
#include <stdlib.h>

int main(){
    int stand;
    printf("Enter the value of stand: ");
    scanf("%d", &stand);

    srand(stand);

    for (int i = 1; i <= 10; i++)
    {
        printf("%6d ", 1 + rand()%6);
        
        if ((i % 5) == 0)
            puts("");
    } 
    
    return 0;
}