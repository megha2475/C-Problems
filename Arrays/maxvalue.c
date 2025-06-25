//Program to find the maximum value in an array.

#include <stdio.h>
int main(){
    int i,a[100],maxValue = a[0],n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++){
        if(a[i]>maxValue){
            maxValue = a[i];
        }
    }
    printf("Maxvalue:%d",maxValue);
}
