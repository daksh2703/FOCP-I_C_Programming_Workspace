#include <stdio.h>
int main(){
    int marks;
    printf("Enter Marks");
    scanf("%d",&marks);
    if (marks<0 || marks>100){
        printf("Invalid\n");
    }
    else if(marks>=80){
        printf("Distinction\n");
    }
    else if(marks>=60){
        printf("First Division\n");
    }
    else if(marks>=40){
        printf("Pass\n");
    }
    else{
        printf("Fail\n");
    }
    return 0 ;
}