#include <stdio.h>
#define SIZE 3
int main() {
    int arr1[SIZE] = {};
    int arr2[SIZE] = {};
    printf("Enter the first elements : ");
    for(int i = 0; i < SIZE; ++i) {
        scanf("%d", &arr1[i]);
    }
    for(int j = 0;j < SIZE; ++j) {
        scanf("%d", &arr2[j]);
    }
    for(int i = 0; i < 2*SIZE; ++i) {
        if(i < SIZE) {
    
        
        printf("%d", arr1[i]);
        }
        else {
        
        printf("%d", arr2[i - SIZE]);
    }
    }
    return 0;
}
