#include <stdio.h>
int main() {
    int size,i,Number;
    printf("Enter how many Numbers you want to add: ");
    scanf("%d",&size);
    int arr[size];
    for(i = 1;i<=size;i++) {
        printf("Enter Number %d: ",i);
        scanf("%d",&Number);
        arr[i-1] = Number;
    }
    printf("Array: {");
    for(i = 0;i<size;i++) {
        printf("%d",arr[i]);
        if(i < size-1) {
            printf(",");
        }
    }
    printf("}");
    printf("\nTraversing Array:\n");
    for(i = 0;i<size;i++) {
        printf("Element %d: %d\n",i+1,arr[i]);
    }
    return 0;
}