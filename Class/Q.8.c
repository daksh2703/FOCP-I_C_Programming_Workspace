#include<stdio.h>
int main(){
   int num;
   printf("Enter a number");
   scanf("%d",&num);
   if (num>0){
    if(num%2==0){
        printf("%d is positive and even",num);
    }
    else{
        printf("%d is positive and odd",num);
    }
   } 
   else{
    printf("%d is negative",num);
   }
   return 0;
}