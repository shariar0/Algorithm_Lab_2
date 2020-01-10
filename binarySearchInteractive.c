#include <stdio.h>
int main(){
    int a[100]={4,6,7,11,25,36,55,69,72,79};
    int n=10,x,mid,flag=-1;
    int first=0,last=n-1;

    printf("Enter Searching Element : ");
    scanf("%d",&x);
    while(first<=last){
        mid = (first+last)/2;
        if(x==a[mid]){
            flag=mid;
            break;
        }

        if(x>a[mid])
            first = mid+1;
        else
            last=mid-1;
    }

    if(flag != -1)
        printf("Element Found at index of %d",flag);
    else
        printf("Element Not Found ");
    return 0;
}
