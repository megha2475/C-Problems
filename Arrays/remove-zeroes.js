//Program to remove zeros from an array.

#include <stdio.h>
int main(){
    int arr[100],n,k,i;
    printf("limit:");
    scanf("%d",&n);
    printf("values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        if(arr[i]==0){
            for(k=i;k<n;k++){
                arr[k] = arr[k+1];
            }
            n--;
            i--;
        }
    }
    for(i=0;i<n;i++){
        printf("Array:%d ",arr[i]);
    }
}
