#include <stdio.h>

int main (void){
    int ch;
    int space_count = 0;
    int newstr_count = 0;
    int other_count = 0; 

    printf("Enter text (or # for exit):\n");
    
    while ((ch = getchar()) != '#'){
        if (ch == ' ') {
            space_count++;
        } 
        else if (ch == '\n') {
            newstr_count++;
        } 
        else {
            other_count++;
        }
    }

    printf("Spaces: %d\n", space_count);
    printf("New strings: %d\n", newstr_count);
    printf("Other symbols: %d\n", other_count);

    return 0;
}
