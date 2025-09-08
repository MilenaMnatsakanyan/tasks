#include <stdio.h>
#define SIZE 3
int main () {
    int arr1[SIZE] = {};
    int arr2[SIZE] = {};
    printf("Enter the elements for first array : ");
    for(int i = 0;  i < SIZE; ++i){
        scanf("%d", &arr1[i]);
    }
    for(int j = 0; j < SIZE; ++j) {
        scanf("%d", &arr2[j]);
    }
    for(int m = 0;  m < SIZE; ++m){
    if(arr1[m] != arr2[m]) {
        printf("they are not the same ");
        break;
    }
    
    else if(arr1[m] == arr2[m]) {
        ++m;
        if(m == SIZE){
            printf("They are the same");
            
    }
    }
    }
    return 0;
}
