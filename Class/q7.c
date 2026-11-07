#include <stdio.h>
int main (void){
    int p,c,m,e,cs,z;
    printf("Enter your marks");
    scanf("%d %d %d %d %d",p,c,m,e,cs);
    z = p + c + m + e + cs;
    printf("Total: %d" , z);
    printf("Percentage: %d",z/5);
    return 0;
}