#include <stdio.h>
int main(void){
    printf("Input the speed of the download in Mb/s: ");
    float speed;
    scanf("%f", &speed);
    printf("Input the size of the file in MB: ");
    float size;
    scanf("%f", &size);
    float time = (size * 8 )/ speed;
    printf("The time of the file download: %.2f seconds\n", time);
    return 0;
}
