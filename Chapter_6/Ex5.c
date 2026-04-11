#include <stdio.h>
#define QUIT '#'
int main (void){
    int ch;
    int change_count = 0;

    printf("Enter text (or # for exit):\n");
    
    while ((ch = getchar()) != QUIT){
        switch (ch) {
        case '.':
            ch = '!';
            change_count++;
            break;
        case '!':
            ch = '!!';
            change_count++;
            break;
        }
    }

    printf("Change count: %d\n", change_count);

    return 0;
}
