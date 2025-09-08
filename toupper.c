#include <stdio.h>
#define SIZE 5
int main() {
    char arr[SIZE] = {};
    printf("Enter the elements : ");
    for(int i = 0; i < SIZE; ++i) {
        scanf(" %c", &arr[i]);
    }
    for(int j = 0; j < SIZE; ++j) {
        arr[j] -= 32;
        printf("%c", arr[j]);
    }
    return 0;
}
