//Program to check if the array is a palindrome (reads the same forward and backward).

#include <stdio.h>
int main(){
int arr[100],n,i;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int isPalindrome = 0;
    for(i=0;i<n/2;i++){
        if(arr[i] == arr[n-i-1]){
            isPalindrome = 1;
            break;
        }
    }
    if(isPalindrome==1){
        printf("Array is palindrome");
    }else{
        printf("Not palindrome");
    }
}
