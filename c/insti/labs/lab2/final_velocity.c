#include <stdio.h>
int main(){
    float int_vel; // initial velocity
    float time; 
    float acc; // acceleration


    printf("enter the value of initial velocity\n > ");
    scanf("%f", &int_vel);
    printf("enter the value of acceleration\n > ");
    scanf("%f", &acc);
    printf("enter the value of time elapsed\n > ");
    scanf("%f", &time);
    printf("the final velocity is %f\n", int_vel + acc * time);
    printf("the distance travelled by body is %f\n", int_vel*time + 0.5*acc*time*time);


    return 0;
}