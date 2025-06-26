//Program to find the second largest element in the array.

#include <stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int secondLargest,largest = 0;
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(largest!=secondLargest && arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    printf("Second largest number:%d",secondLargest);
}
