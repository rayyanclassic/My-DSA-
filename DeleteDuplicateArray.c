#include <stdio.h>

int main() {
    int arr[20], n=20;

    printf("Enter 20 integers:\n");

    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (arr[i] == arr[j]) {

                for (int k=j; k<n-1; k++) {
                    arr[k]=arr[k+1];
                } 
                n--;
                j--;
            }
        }
    }
    printf("Array after deleting duplicates:\n");
    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}