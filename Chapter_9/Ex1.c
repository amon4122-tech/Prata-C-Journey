#include <stdio.h>

double min(double *, double *);

int main(void){
    double x,y;
    printf("Enter a pair of numbers for finding the smallest of them:(or q to end)");
    while(scanf("%lf %lf", &x, &y ) == 2){
        double dmin = min(&x, &y);
        printf("The smallest of the two numbers is %g!\n", dmin);
        printf("Enter a pair of numbers for finding the smallest of them:(or q to end)");
    }
    printf("The program is completed! See you later!\n");
    return 0;
}

double min(double * a, double *b){
    if (*a < *b){
        return *a;
    }
    else {
        return *b;
    }
}
