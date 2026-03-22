#include <stdio.h>

float quarts_water = 0.950;
float molecular = 3.0e-23;
float molecular_count;
float quarts;

int main(void){
    printf("Input the number of quarts: ");
    scanf("%f", &quarts);
    molecular_count = (quarts * quarts_water)/molecular;
    printf("This is %f molecules\n", molecular_count);
    return 0;
}
