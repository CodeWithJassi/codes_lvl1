#include <stdio.h>
int main(){
    int highest_rainfall_ever;
    int current_rainfall;

    printf("Enter the highest rainfall ever in the season in your country\n > ");
    scanf("%d", &highest_rainfall_ever);
    printf("Enter the current rainfall\n > ");
    scanf("%d", &current_rainfall);

    if (current_rainfall > highest_rainfall_ever)
    {
        printf("current rainfall is the highest ever rainfall!!!");
    }
    else if (current_rainfall == highest_rainfall_ever)
    {
        printf("current rainfall is same as the last highest ever rainfall");
    }
    else
    {
        printf("current rainfall is less than the last highest ever rainfall");
    }

    return 0;
}