#include <stdio.h>
int main() {
    int n,i,Number,Maximum,Minimum;
    printf("Enter how many Numbers you want to add: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Number 1: ");
    scanf("%d",&Maximum);
    arr[0] = Maximum;
    Minimum = Maximum;
    for(i = 2;i<=n;i++) {
        printf("Enter Number %d: ",i);
        scanf("%d",&Number);
        arr[i-1] = Number;
        if(Number > Maximum) {
            Maximum = Number;
        }
        if(Number < Minimum) {
            Minimum = Number;
        }
    }
    printf("Array: {");
    for(i = 0;i<n;i++) {
        printf("%d",arr[i]);
        if(i < n-1) {
            printf(",");
        }
    }
    printf("}\n");
    printf("Largest Number: %d\n",Maximum);
    printf("Smallest Number: %d\n",Minimum);
    return 0;
}