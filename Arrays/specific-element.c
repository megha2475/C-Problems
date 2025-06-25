//Program to search for a specific element in an array.

#include <stdio.h>
int main(){
    int i,n,a[100],number;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    };
    
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=0;i<n;i++){
        if(number==a[i]){
            printf("Position of the number:%d",i+1);
        }
    }
}
