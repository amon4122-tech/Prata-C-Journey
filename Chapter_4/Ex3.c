#include <stdio.h>
#define DAY_PER_WEEK 7

int main (){
    int days;
    printf("Enter a number of days: ");
    scanf("%d", &days);
    while (days > 0){
        int week = days / DAY_PER_WEEK;
        int div_days = days % DAY_PER_WEEK;        
        printf("%d days is %d week and %d days\n", days, week, div_days);
        printf("Enter a number of days: ");
        scanf("%d", &days);
    }
    printf("It's all!\n");
    return 0; 
}
