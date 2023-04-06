#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int val_ent = 0; // varible to check if values(for to num i.e. first_num & sec_num) are given or not


    printf("##########INSTRUCTIONS##########\n");
    printf("Following are some commands to operate this programm\n");
    printf(" HELP: for help\n ENT1: for entering first number\n ENT2: for entering second number\n ADD: to add numbers\n SUB: to subtract\n MUL: to multiply \n DIV: to divide \n");
    while (1)
    {   
        int first_num;
        int sec_num; // second number
        char cmd[100]; 
        printf(" >");
        scanf("%s", cmd);

        for (size_t i = 0; cmd[i]; i++)
        {
            cmd[i]=tolower(cmd[i]);
        }
        

        if (strcmp(cmd ,"help")==0){
            printf("%s", "");
            printf("%s", " HELP: for help\n ENT1: for entering first number\n ENT2: for entering second number\n ADD: to add numbers\n SUB: to subtract\n MUL: to multiply \n DIV: to divide \n");

        }
        
            
            
        
    }
    
    





    return 0;
}