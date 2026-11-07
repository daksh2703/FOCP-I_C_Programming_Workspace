#include<stdio.h>
int main (void){
    int x,y,z;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&x ,&y);
    printf("x = %d y = %d\n",x,y);
    z = x;
    x = y;
    y = z;
    printf("New values are:\n x = %d y = %d",x,y);
}