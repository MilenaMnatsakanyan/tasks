#define SIZE 3
#include <stdio.h>
int main() {
    int arr[SIZE] = {};
    float res = 0;
    printf("Enter the elements of array : ");
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }
    for(int j = 0; j < SIZE; ++j) {
        res += arr[j];
    }
    float res1 = res/SIZE;
    printf("%f", res1);
    return 0;
}
