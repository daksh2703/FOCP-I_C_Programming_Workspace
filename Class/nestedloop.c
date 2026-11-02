#include<stdio.h>
void printPattern(int row){
    for(int i =1;i<=row;i++){
        for(int j=5;j>=i;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}

int main(){
    printPattern(5);
    return 0;
}