#include <stdio.h>

int main() {
    int n;
    int a=0, b=1, next;

    printf("Fibonacci Triangle\n");
    printf("Pls enter the number:");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d", a);

            next= a+b;
            a=b;
            b=next;
        }
        printf("\n");
    }
    return 0;
}

