#include<stdio.h>
int main (void){
    int age;
    float height;
    char g;
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your height in meters:\n");
    scanf("%f",&height);
    printf("Enter your grade:\n");
    scanf("%c",&g);
    printf("Age: %d",age);
    printf("Height: %.2f",height);
    printf("Grade: %c",g);
    return 0;
}