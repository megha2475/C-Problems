//Program to count the total number of even and odd numbers in an array.

#include <stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    };
    
    int evenCount = 0,oddCount = 0;
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    printf("Count of even numbers:%d\n",evenCount);
    printf("Count of odd numbers:%d",oddCount);
}
