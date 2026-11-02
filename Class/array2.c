#include<stdio.h>
void printArray(int a [], int n){
    for (int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}

int addArrayElements(int a[],int n){
    int sum = 0;
    for (int i =0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int inputArray(int*a, int n){
    for(int i=0;i<n;i++){
        printf("Enter value:");
        scanf("%d",&a[i]);
    }
}

int search( int a[], int n, int target){
    for (int i =0;i<n;i++){
        if(a[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size;
    printf("Enter size of arrray");
    scanf("%d",&size);
    int a[size];
    inputArray(a,size);
    printArray(a,size);
    printf("\n");
    printf("Enter number to research");
    int target;
    scanf("%d,&target");
    int pos=search(a,size,target);
    if(pos!=1){
        printf("%d found at position %d\n",target,pos);
    }
    else{
        printf("%d not found\n", target);
    }
    return 0;

}