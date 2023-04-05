#include <stdio.h>

char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}

int main() {
    char arr[5] = {0};
    printf("Before memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    _memset(arr, 5, 5);

    printf("After memset: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

