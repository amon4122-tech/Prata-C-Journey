#include <stdio.h>
#include <math.h>

double func_cube(double *user_input);
int main(){
    double user_input;
    printf("Enter a number:");
    scanf("%lf", &user_input);
    double func_result = func_cube(&user_input);
    printf("Cube of number = %.1lf\n", func_result);
    return 0;
}
double func_cube(double *user_input){
    double cube = pow(*user_input, 3);
    return cube;
}

//-OR -

#include <stdio.h>

double func_cube(double *user_input);
int main(){
    double user_input;
    printf("Enter a number:");
    scanf("%lf", &user_input);
    double func_result = func_cube(&user_input);
    printf("Cube of number = %.1lf\n", func_result);
    return 0;
}
double func_cube(double *user_input){
    double cube = (*user_input)*(*user_input)*(*user_input);
    return cube;
}
