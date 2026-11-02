#include<stdio.h>
int add(int x,int y){
    return x + y;
}

int main(void){
    int x,y;
    x = 10;
    y = 20;
    int result = add(x,y);
    printf("%d\n",result);
    printf("%d\n",add(9,10));
    printf("%d\n",add(x,y));
    printf("%d\n",largest(12,5,78));
    return 0;
}

int largest(int a, int b , int c){
    int max = a;
    if (b>max) max=b;
    if (c>max) max=c;
    return max;
}