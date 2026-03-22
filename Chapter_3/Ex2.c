#include <stdio.h>
#include <string.h>

int main(void){
    char name[20];
    printf("Input your name: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", (int)strlen(name) + 3, name);
    return 0;
}
