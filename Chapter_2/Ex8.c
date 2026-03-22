#include <stdio.h>
int main(void){
    
    printf("Input the value in cups: ");
    float cups, pints, tablespoons, teaspoons, ounces;
    
    tablespoons = teaspoons * 3.0;
    ounces = tablespoons * 2.0;
    pints = cups * 2.0;
    
    scanf("%f", &cups);
    printf("This is %f pints\n", pints);
    printf("This is %f ounces\n", ounces);
    printf("This is %f tablespoons\n", tablespoons);
    printf("This is %f teaspoons\n", teaspoons);
    return 0;
}
