#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5}, arr2[5];
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        arr2[i] = arr[size - 1 - i];
        printf("%d\n", arr2[i]);
    }

    return 0;
}