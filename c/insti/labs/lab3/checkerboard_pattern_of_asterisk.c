// #include <stdio.h>
// int main(){
//     int side = 8; // side of the checkerboard
//     int i = 1;
//     while(i <= side)
//     {
//         if (i%2 == 1){
//             int j = 1;
//             while(j <= side){
//                 printf("* ");
//                 j++;
//             }
//             puts("");
//         }
//         else
//         {
//             printf(" ");
//             int j = 1;
//             while(j <= side){
//                 printf("* ");
//                 j++;
//             }
//             puts("");

//         }
//         i++;
//     }
//     return 0;
// }

#include <stdio.h>
int main(){
    int side = 8; // side of the checkerboard
    int i = 1;
    while(i <= side)
    {
        if (i%2 == 0){
            printf(" ");
        }



        int j = 1;
        while(j <= side)
            {
             printf("* ");
             j++;
            }
            puts("");
        i++;
    }
    
    return 0;
}