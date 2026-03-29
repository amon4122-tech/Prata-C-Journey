#include <stdio.h>

double Temp_F, Temp_C, Temp_K;
void Temperature(double *Temp_F);

int main(void){
    int status;
    printf("Enter the temperature value in Fahrenheit (or Q for exit):");
    status = scanf("%lf", &Temp_F);
    while (status == 1){
        printf("\n");
        Temperature(&Temp_F);
        printf("Enter the new value in Fahrenheit (or Q for exit):");
        status = scanf("%lf", &Temp_F);
    }
    return 0;
}
void Temperature(double *Temp_F){
    const char Celsius = 'C', Kelvin = 'K', Fahrenheit = 'F';
    Temp_C = 5.0 / 9.0 *(*Temp_F - 32.0);
    Temp_K = Temp_C + 273.16;
    printf("%.2lf%c is %.2lf%c and %.2lf%c \n", *Temp_F, Fahrenheit, Temp_C, Celsius,  Temp_K, Kelvin);
}

