#include <stdio.h>
#define MAX 100
int main() {
    int array[MAX], size, i, j, key;
    printf("Enter Size of Array: ");
    scanf("%d",&size);
    printf("\nEnter %d elements: \n",size);
    for(i = 0; i<size; i++) {
        printf("Enter element %d: ",i);
        scanf("%d",&array[i]);
    }
    for(i = 1; i<size; i++) {
        key = array[i];
        j = i - 1;
        while(j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
    printf("Sorted Array: ");
    printf("{");
    for(i = 0; i<size;i++) {
        printf("%d",array[i]);
        if(i<size-1) {
            printf(",");
        }
    }
    printf("}");
    return 0;
}