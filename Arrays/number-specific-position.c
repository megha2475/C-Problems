//Program to insert an element at a specific position in an array.

#include <stdio.h>
int main(){
    int a[100],i,n;
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int num,pos;
    printf("position:");
    scanf("%d",&pos);
    printf("Number:");
    scanf("%d",&num);
    
    if(pos<n){
        for(i=n;i>pos;i--){
            a[i] = a[i-1];
        }
        a[pos] = num;
        n++;
    }else{
        printf("You enterd wrong postion...try again!");
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
