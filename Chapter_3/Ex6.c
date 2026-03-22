#include <stdio.h>
#include <string.h>

int main(void) {
    char name[20];
    char surname[20];

    printf("Input your name: ");
    scanf("%s", name);
    printf("Input your surname: ");
    scanf("%s", surname);

    int name_len = ((int)strlen(name));
    int surf_len = ((int)strlen(surname));

    printf("%s %s\n", name, surname);
    printf("%*d %*d\n", name_len, name_len, surf_len, surf_len);
    printf("%s %s\n", name, surname);
    printf("%-*d %-*d\n", name_len, name_len, surf_len, surf_len);

    return 0;
}
