#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < (size / 2); i++) {
            int safe = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = safe;
    }

    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }


    return 0;
}