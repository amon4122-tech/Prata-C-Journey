#include <stdio.h>
int main(void){
    int count, sum;
    int limit_number;
    count = 0;
    sum = 0;
    printf("Enter of limit:");
    scanf("%d", &limit_number);
    while (count++ < limit_number)
        sum = sum + count;
    printf("sum = %d\n", sum);
    return 0;
}
