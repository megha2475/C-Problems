//Program to largest element in an array.

#include <stdio.h>
int main() {
    int arr[100],n,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxValue = 0;
    for(i=0;i<n;i++){
        if(arr[i]>maxValue){
            maxValue = arr[i];
        }
    }
    printf("Maxvalue:%d",maxValue);
}
