//Program to find the number of positive, negative, and zero elements.

#include <stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int pos[100],neg[100],zero[100],posIndex=0,negIndex =0,zeroIndex=0; 
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos[posIndex++] = arr[i];
        }else if(arr[i]<0){
            neg[negIndex++] = arr[i];
        }else{
            zero[zeroIndex++] = arr[i];
        }
    }
    printf("Positive numbers:");
     for(i=0;i<posIndex;i++){
         printf("%d ",pos[i]);
     }
      printf("\nNegative numbers:");
     for(i=0;i<negIndex;i++){
         printf("%d ",neg[i]);
     }
     printf("\nZero numbers:");
     for(i=0;i<zeroIndex;i++){
         printf("%d",zero[i]);
     }
}
