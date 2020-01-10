#include<stdio.h>
void linearSearch(int a[],int i,int n,int x){
    if(i>=n){
        printf("Item Not Found");
        return;
    }

    if(a[i]==x){
        printf("Item Found at index of %d",i);
        return;
    }

    linearSearch(a,i+1,n,x);
}
int main(){
    int a[]={3,7,10,12,14,15,17,18,22,24};
    int i,x,n=10;

    printf("Enter Searching Element : ");
    scanf("%d",&x);

    linearSearch(a,0,n,x);
    return 0;
}

