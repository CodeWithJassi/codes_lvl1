#include <stdio.h>
int main(){

    int num;
    int find = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int i=1;
    while (i <= num)
    {
        if (i%7 == 0)
        {
            printf("Clap\n");
            find = 1;
        }
        else if (1)
        {
            int decimal = 1; // 10
            while(1){

                if ((i/decimal) == 0)
                {
                    break;
                }

                if ((i/decimal) == 7)
                {
                    printf("Clap\n");
                    find = 1;
                    break;                   
                }

                if ((((i%decimal)*10)/decimal)==7){
                    printf("Clap\n");
                    find = 1;
                    break;
                }

                decimal *= 10;

            }
        }
        
        if (find != 1)
        {
            printf("%d\n", i);
        }
        find = 0;
        i++;

    }

    return 0;
}

