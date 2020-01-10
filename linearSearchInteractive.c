#include<stdio.h>
int main(){
    int a[]={3,7,10,12,14,15,17,18,22,24,25};
    int i,x,n=10;
    int flag = -1;
    printf("Enter Searching Element : ");
    scanf("%d",&x);

    for(i=0;i<n;i++){
        if(a[i]==x){
            flag=i;
            break;
        }
    }
    if(flag != -1)
        printf("Element Found at index of %d",flag);
    else
        printf("Element Not Found");
    return 0;
}
