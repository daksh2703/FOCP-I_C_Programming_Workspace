#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        int k = (i <= mid) ? i : n - i + 1;   /* wing size on this row */
        for (int j = 1; j <= k; j++) printf("*");
        for (int j = 1; j <= 2 * (mid - k) + 1; j++) printf(" ");
        for (int j = 1; j <= k; j++) printf("*");
        printf("\n");
    }
    return 0;
}