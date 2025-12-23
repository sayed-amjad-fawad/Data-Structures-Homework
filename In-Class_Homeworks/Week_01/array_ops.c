#include <stdio.h>

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;
    int x = 10, pos = 2;

    // insertion
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
    n++;

    printf("After insert: ");
    display(arr, n);

    // deletion
    pos = 3;
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("After delete: ");
    display(arr, n);

    return 0;
}
