#include <stdio.h>

int main() {
    int n;
    printf("***Array of N elements***\n");
    printf("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);

    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array elements are:\n");
    for (int i=0; i<n; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}