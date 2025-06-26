//Program to find all prime numbers in the array.

#include <stdio.h>
int main(){
    int arr[100],n,j,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++){
        int flag = 0;
        for(j=2;j<=arr[i]/2;j++){
            if(arr[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag == 0){
            printf("%d ",arr[i]);
        }
    }
}
