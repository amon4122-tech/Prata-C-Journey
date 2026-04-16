#include <stdio.h>

int get_letter_pos(char ch);

int main(void) {
    char ch;
    while ((ch = getchar()) != EOF) {
        int pos = get_letter_pos(ch);
        if (pos != -1) {
            printf("Symbol %c is a letter, position: %d\n", ch, pos);
        } 
        else {
            continue;
        }
    }
    return 0;
}

int get_letter_pos(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch - 'A' + 1;
    } else if (ch >= 'a' && ch <= 'z') {
        return ch - 'a' + 1;
    }
    return -1; 
}
