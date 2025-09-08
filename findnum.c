#define SIZE 3
#include <stdio.h>
int main() {
    int arr[SIZE] = {};
    int num = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the elements of array : ");
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr[i]);
    }

    for(int j = 0; j < SIZE; ++j) {
        if(arr[j] == num) {
        printf("true");
        break;
        }
        else {
            printf("false");
            break;
        }
    }
    return 0;
}
