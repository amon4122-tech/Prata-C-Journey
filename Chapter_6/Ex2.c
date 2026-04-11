#include <stdio.h>
#define MAX 1000

int main(void)
{
    int ch;
    char buf[MAX];
    int n = 0;

    printf("Enter text (or # for exit):\n");
    while (n < MAX && (ch = getchar()) != '#') {
        if (ch == '\n')
            continue;
        buf[n++] = (char)ch;
    }

    putchar('\n');
    for (int i = 0; i < n; i++) {
        printf("%c %d\t", buf[i], (unsigned char)buf[i]);
        if ((i + 1) % 8 == 0)
            putchar('\n');
    }
    if (n % 8 != 0)
        putchar('\n');

    return 0;
}
