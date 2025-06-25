//Program to find the average of all elements in an array.

#include <stdio.h>
int main(){
    int i,avg,sum =0,a[] = {9,2,6,1,5},n = 5;
    for(i=0;i<n;i++){
        sum += a[i];
    }
    avg = sum/n;
    printf("%d",avg);
}
