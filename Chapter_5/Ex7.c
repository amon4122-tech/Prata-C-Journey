#include <stdio.h>
#include <string.h>

int main (void){
    
    char word[20];
    printf("Enter word:");
    scanf("%s", word); 
    int arr_leight = strlen(word);
    for (int i = arr_leight - 1; i >= 0; i--) {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;

}
