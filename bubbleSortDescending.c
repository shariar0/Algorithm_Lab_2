#include <stdio.h>
int main(){
    int a[100]={25,4,88,13,65,75,25,14,98,66};
    int i,j,temp,n=10;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                temp=a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    //For Display Array After sorting
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
