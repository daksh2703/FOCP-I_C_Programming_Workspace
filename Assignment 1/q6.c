#include <stdio.h>
int main(void){
    int x,y;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&x,&y);
    printf("Quotient:%d \n Remainder:%d",x/y,x%y);
}