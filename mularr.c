#define SIZE 3
#include <stdio.h>
int main () {
    int arr1[SIZE] = {};
    int arr2[SIZE] = {};
    printf("Enter the elemenets of the first array : ");
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of the second array : ");
    for(int j = 0; j < SIZE; ++j) {
        scanf("%d", &arr2[j]);
    }
    for(int i = 0; i < SIZE; ++i) {
            printf("%d", arr1[i] * arr2[i]);
        
    }
    return 0;
    
}
