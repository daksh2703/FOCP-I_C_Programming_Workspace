#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {              /* upper half incl. widest row */
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {          /* lower half */
        for (int j = 1; j <= n - i; j++) printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
    return 0;
}