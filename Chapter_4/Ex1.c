#include <stdio.h>
#define MINUTES_PER_HOUR 60
int main(void){
    int minutes, hours;
    printf("Enter the number of minutes: ");
    scanf("%d", &minutes);
    while (minutes > 0){
    hours = minutes / MINUTES_PER_HOUR;
        minutes = minutes % MINUTES_PER_HOUR;
        printf("The time is %d hours and %d minutes.\n", hours, minutes);
        printf("Enter the number of minutes: ");
        scanf("%d", &minutes);
    }   
    printf("Bye!\n");
    return 0;
}
