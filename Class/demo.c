#include <stdio.h>
int main(void){
    int x;
    printf("Enter the value for x");
    scanf("%d",&x);
    if(x==10){
        printf("x=%d\n",x);
    }
    else{
        printf("Invalid input\n");
    }
    return 0;
}