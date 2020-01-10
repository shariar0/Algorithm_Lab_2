#include <stdio.h>
int main(){
    int a[100]={44,23,15,78,65,41,32,14,99,84};
    int i,j,n=10;
    int b[100];

    for(i=0;i<n;i++){
        j=i-1;
        while(b[j]<a[i] && j>=0){
            b[j+1]=b[j];
            j--;
        }
        b[j+1] = a[i];
    }
    //Displaying sorted array
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
