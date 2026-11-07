#include<stdio.h>
int main (void){
    int price;
    int q;
    printf("Enter the price of item:\n");
    scanf("%d",&price);
    printf("Enter no. of items\n");
    scanf("%d", &q);
    printf("Total cost: %d",price*q);
    return 0;
}