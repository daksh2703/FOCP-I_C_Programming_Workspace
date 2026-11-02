#include<stdio.h>
int main(void){
    int a;
    printf("Enter number");
    scanf("%d",&a);
    if(a%5==0){
        printf("%d is divisble by 5\n",a);
    }
    return 0;
}