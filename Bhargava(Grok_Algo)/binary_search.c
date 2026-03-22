//Пример кода бинарного поиска на основе отсортированного массива из 10 элементов
#include <stdio.h>

int binary_search(int arr[], int size, int target);

int main(void) {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Введите число для поиска (от 1 до 10): ");
    scanf("%d", &target);
    int result = binary_search(arr, size, target);
    if (result != -1) {
        printf("Число %d найдено на позиции (индексе): %d\n", target, result);
    } else {
        printf("Число %d в массиве не обнаружено.\n", target);
    }
    return 0;
}

int binary_search(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
