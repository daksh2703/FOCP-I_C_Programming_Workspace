#include <stdio.h>

int main (void){
    int a[] = {10,20,2};
    int max = a[0]; 
    for (int i = 0; i < 5; i++){
        if(a[i]>max){
            max = a[i];
        }

    }
}