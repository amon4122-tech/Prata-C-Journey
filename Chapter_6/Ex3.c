#include <stdio.h>

int main (void){
    int ch;
    int n_even = 0;
    int n_odd = 0;
    int n_sum_even = 0;
    int n_sum_odd = 0;

    printf("Enter text (or 0 for exit):\n");
    
    while ((ch = getchar()) != '0'){
        if (ch % 2 == 0){
            if (ch == 0)
                continue;
            n_even++;
            n_sum_even += ch;
        }
        else if (ch % 2 != 0){
            n_odd++;
            n_sum_odd += ch;
        }
    }

    printf("Even: %d\n", n_even);
    printf("Odd: %d\n", n_odd);
    printf("Average even: %d\n", n_sum_even / n_even);
    printf("Average odd: %d\n", n_sum_odd / n_odd);
    return 0;
}
