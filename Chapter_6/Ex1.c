#include <stdio.h>
#include <ctype.h>

int main (void){
    char ch;
    int space_count = 0;
    int char_count = 0;

    while ((ch = getchar()) != '#'){
        if (isspace(ch)) {
            space_count++;
        }
        if (!isspace(ch)) 
        char_count++;
    }
    printf("Space count = %d. Char count = %d\n", space_count, char_count);
    return 0;
}
