#include <stdio.h>
int main(){
    int hypotenuse = 1;
    int side1 = 1;
    int side2 = 1;

    for(hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
    {
        for(side2 = 1; side2 < hypotenuse; side2++)
        {
            for(side1 = 1; side1 <= side2; side1++)
            {
                if(side1*side1 + side2*side2 == hypotenuse*hypotenuse)
                printf("(%3d, %3d, %3d)\n", side1, side2, hypotenuse);
            }
        }
    }

    return 0;
}