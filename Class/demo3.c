#include<stdio.h>
int main(void){
    int a,b;
    printf("Enter 2 numbers:");
    if(scanf("%d %d, &a, &b")!=2){
        printf("Please input 2 integers only\n");
        return 1;
    }
    printf("x=%d y=%d\n",a,b);
    if(b!=0){
        printf("%d\n",a/b);
    }
    else{
        printf("b cannot be zero, please retry");
    }
    return 0;
}