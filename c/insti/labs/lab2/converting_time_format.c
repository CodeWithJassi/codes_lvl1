#include <stdio.h>
int main(){
    int time_in_sec; // time in seconds
    int time_for; // time formatted in form of hours:minutes:seconds

    printf("enter the time in seconds\n >");
    scanf("%d", &time_in_sec);
    printf("%d:%d:%d\n",   (time_in_sec/60) / 60,     time_in_sec/60 % 60,      time_in_sec%60);

    return 0;
}