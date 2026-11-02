#include<stdio.h>
#include<stddef.h>
void toLower(){
    for(int i =0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]){

        }
    }
}

int wordCount(const char str[]){
    for(int i = 0;str[i]!='\0';i++){

    }
}

void swap(char*x,char*y){
    char t=*x;
    *x=*y;
    *y=t;
}

void reverse(char str[]){
    int length=stringLength(str);
    for(int i = 0, j =length-1; i<j; i++,j--){
        swap(&str[i],&str[j]);
    }
}

int palindrome(const char str[]){
    int length = stringLength(str);
    for(int i=0, j=length-1;i<j;i++,j--){
        if(str[i]!=str[j]){
            return 0;
        }
    }
    return 1;
}