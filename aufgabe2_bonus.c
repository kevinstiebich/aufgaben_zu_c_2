#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        if (i < size / 2) {
            int safe = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = safe;
        
            printf("%d\n", arr[i]);
        } else {
            
        }
    }


    return 0;
}