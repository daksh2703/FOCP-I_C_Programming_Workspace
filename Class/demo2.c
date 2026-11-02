#include<stdio.h>
int main(void){
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d", &a, &b);
    printf("x=%d y=%d\n",a,b);
    printf("%d\n",a/b);
    return 0;
}