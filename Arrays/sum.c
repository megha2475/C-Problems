//Program to find the sum of all elements in an array.

#include <stdio.h>

int main(){
    int a[]={3,1,0,6},i,n=4,sum = 0;
    for(i=0;i<n;i++){
        sum += a[i];
    }
    printf("Sum:%d",sum);
 }
