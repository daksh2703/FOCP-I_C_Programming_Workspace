#include <stdio.h>
int main() {
    int n, c = 1;
    printf("Enter a number between 1 and 20");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j > 1) printf(" ");
            printf("%d", c++);
        }
        printf("\n");
    }
    return 0;
}