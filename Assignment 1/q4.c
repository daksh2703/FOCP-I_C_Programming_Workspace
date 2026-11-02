#include <stdio.h>
int main (void){
    int x,y,z;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&x,&y,&z);
    printf("Average: %.2f",(x+y+z)/3.0);
    return 0;
}