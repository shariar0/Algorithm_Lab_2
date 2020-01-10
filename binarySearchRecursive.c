#include <stdio.h>
int binarySearch(int a[],int first,int last,int x){
    if(first>last)
        return -1;

    int mid = (first+last)/2;
    if(x==a[mid])
        return mid;

    if(x>a[mid]){
        first = mid+1;
    }else{
        last=mid-1;
    }
    binarySearch(a,first,last,x);
}
int main(){
    int a[100]={4,6,7,11,25,36,55,69,72,79};
    int n=10,x,mid,flag;
    int first=0,last=n-1;

    printf("Enter Searching Element : ");
    scanf("%d",&x);

    flag=binarySearch(a,first,last,x);

    if(flag != -1)
        printf("Element Found at index of %d",flag);
    else
        printf("Element Not Found ");

    return 0;
}
