#include <stdio.h>
int main(){
    int a[100]={36,14,25,78,15,26,99,58,7,66};
    int i,j,temp,max,n=10;

    for(i=0;i<n-1;i++){
        max=i;
        for(j=i+1;j<n;j++){
            if(a[max]<a[j])
                max=j;
        }
        if(i!=max){
            temp = a[i];
            a[i]=a[max];
            a[max]=temp;
        }
    }

    //Displaying Array after sorting

    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
