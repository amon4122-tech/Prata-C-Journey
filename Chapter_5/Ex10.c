#include <stdio.h>

long long square_sum(int lower_limit, int upper_limit);

int main(void) {
    int lower_limit, upper_limit;
    printf("Enter lower and upper limits:");
    while (scanf("%d %d",&lower_limit, &upper_limit) == 2) {
        if (lower_limit >= upper_limit) {
            printf("The lower limit cannot exceed or be equal to the upper limit!\n");
            return 1;
        }
        long long result = square_sum(lower_limit, upper_limit);
        printf("Square sum of two limits %d and %d = %lld \n", lower_limit, upper_limit, result);
        printf("Enter next two limits:"); 
    }

    return 0;
}

long long square_sum(int lower_limit, int upper_limit){
    long long sum_square = 0;
    for(int i = lower_limit; i <= upper_limit; i++){
        sum_square = sum_square + ((long long)i*i);
    }
    return sum_square;
}
