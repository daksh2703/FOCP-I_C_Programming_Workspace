#include <stdio.h>
int main (){
    int a,b;
    char op;
    printf("Enter two digits\n");
    scanf("%d %d",&a, &b);
    printf("Enter operator +,-,*,/\n");
    scanf(" %c",&op);
    if (op == '+'){
        printf("Sum is %d\n",a+b);
    }
    else if (op == '-'){
        if(a>b){
            printf("Difference is %d\n",a-b);
        }
        else{
            printf("Difference is %d\n",b-a);
        }
    }
    else if (op == '*'){
        printf("Product is %d",a*b);
    }
    else if (op=='/' && b!=0){
        printf("Quotient is %d",a/b);
    }
    return 0;
}