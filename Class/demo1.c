#include <stdio.h>;
int main (void){
    int x,y;
    printf("Enter first number:");
    scanf("%d",&x);
    printf("Enter second number:");
    scanf("%d",&y);
    if(x%y==0){
        printf("They are divisible");
    }
    else{
        printf("Not divisble");
    }
}