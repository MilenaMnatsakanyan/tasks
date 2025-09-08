#include <stdio.h>
#define SIZE 4
int main() {
    char arr[SIZE] = {};
    printf("Enter the elements : ");
    for(int i = 0; i < SIZE; ++i) {
        scanf(" %c", &arr[i]);
    }
    for(int j = 0; j < SIZE; ++j) {
        if(arr[j] >= '0' && arr[j] <= '9') {
            printf("%c", arr[j]);
        }
    }
    return 0;
}
