#include <stdio.h>
#include <stdlib.h>

void square_sum(int lower_limit, int upper_limit);

int main(void) {
    int lower_limit, upper_limit;
    printf("Enter lower limit:");
    scanf("%d",&lower_limit);
    printf("\n");
    printf("Enter upper limit:");
    scanf("%d",&upper_limit);
    printf("\n");

    printf("Limits: %d %d", lower_limit, upper_limit);
    printf("\n");
    
    system ("PAUSE");
    return 0;
}

void square_sum(int lower_limit, int upper_limit){
    for(int i = lower_limit; i <= upper_limit; i++){
        
    }
}
