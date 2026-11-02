#include<stdio.h>
int main(void){
    int n,i,s;
    printf("Enter number of terms");
    scanf("%d",&n);
    for(i=0; i<=n; i++){
        s += i*i;
    }
    printf("Sum: %d",s);
    return 0;
}