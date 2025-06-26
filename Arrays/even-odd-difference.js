//Program to find the difference between the sum of even and odd elements in an array.

#include <stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int evenSum = 0,oddSum = 0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            evenSum += arr[i];
        }else{
            oddSum += arr[i];
        }
    }
    
    int difference;
    if(evenSum>oddSum){
        difference  = evenSum - oddSum;
    }else{
        difference  = oddSum-evenSum;
    }
    
    printf("Even sum :%d\nOdd sum :%d\n",evenSum,oddSum);
    printf("Difference:%d",difference);
}

