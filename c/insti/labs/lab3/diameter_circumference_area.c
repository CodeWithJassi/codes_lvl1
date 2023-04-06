#include <stdio.h>

int main(){

    float radius;
    float pi = 3.14159;
    float diameter;
    float circumference;
    float area;

    
    while(1){
        printf("Enter the value of radius (-1 to end): ");
        scanf("%f", &radius);

        if (radius == -1)
            break;
        
        if (radius < 0){
            puts("Radius can't be negative \n "); 
            continue;
        }

        diameter = 2 * radius;
        circumference = pi * diameter;
        area = pi * radius * radius;

        printf("The diameter of circle is %0.2f \n", diameter);
        printf("The circumference of circle is %0.2f \n", circumference);
        printf("The area of circle is %0.2f \n \n", area);





        


    }



    return 0;
}