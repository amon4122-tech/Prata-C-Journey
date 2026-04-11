#include <stdio.h>
#define QUIT '#'
int main (void){
    int ch;
    int change_count = 0;

    printf("Enter text (or # for exit):\n");
    
    while ((ch = getchar()) != QUIT){
        if (ch == '.') {
            ch = '!';
            change_count++;
        } 
        else if (ch == '!') {
            ch = '!!';
            change_count++;
        }
    }

    printf("Change count: %d\n", change_count);

    return 0;
}
