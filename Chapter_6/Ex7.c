#include <stdio.h>
#define SALARY_PER_HOUR 10.00
#define OVERTIME_COEFF 1.5
#define TAX_15 0.15
#define TAX_20 0.20
#define TAX_25 0.25
#define TAX_STEP_1 300
#define TAX_STEP_2 150
#define TAX_STEP_3 450
#define REGULAR_HOURS 40

int main (void){
    double hours;
    printf("Enter the number of hours worked on week: ");
    double net_pay, total_pay;
    double regular_pay = REGULAR_HOURS * SALARY_PER_HOUR;

    scanf("%lf" , &hours);
    if (hours > REGULAR_HOURS){
        double overtime_hours = hours - REGULAR_HOURS;
        double overtime_pay = overtime_hours * SALARY_PER_HOUR * OVERTIME_COEFF;
        total_pay = overtime_pay + regular_pay;
    }
    else {
        total_pay = hours * SALARY_PER_HOUR;
    }
    double tax_15, tax_20, tax_25, tax;
    if (total_pay > TAX_STEP_3) {
        tax_15 = TAX_STEP_1 * TAX_15;
        tax_20 = TAX_STEP_2 * TAX_20;
        tax_25 = (total_pay - TAX_STEP_1 - TAX_STEP_2) * TAX_25;
        tax = tax_15 + tax_20 + tax_25;
        net_pay = total_pay - tax;
    }
    else if (total_pay > TAX_STEP_1 && total_pay <= TAX_STEP_3) {
        tax_15 = TAX_STEP_1 * TAX_15;
        tax_20 = (total_pay - TAX_STEP_1) * TAX_20;
        tax = tax_15 + tax_20;
        net_pay = total_pay - tax;
    }
    else {
        tax = total_pay * TAX_15;
        net_pay = total_pay - tax;
    }

    printf("Total pay: %.2f\n", total_pay);
    printf("Tax: %.2f\n", tax);
    printf("Net pay: %.2f\n", net_pay);

    return 0;
}
