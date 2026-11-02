#include <stdio.h>
int main(void){
    int i =1;
    while(i!=-1){
        printf("Enter number :");
        scanf("%d",&i);
        if(i!=-1){
            if(i%2==0){
                printf("Even\n");
            }
            else{
                printf("Odd\n");
            }
        }
    }
    return 0;
}