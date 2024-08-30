#include <stdio.h>

void lucas(int n) {
    static int a = 2, b = 1;
    if (n > 0) {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
        lucas(n-1);
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d terms of the Lucas series are: ", n);
    lucas(n);
    printf("\n");
    return 0;
}