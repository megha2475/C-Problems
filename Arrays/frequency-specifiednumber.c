//Program to find frequency of a specified number
#include <stdio.h>

int main() {
    int i,n,a[100],number,frequency;
    printf("Enter a limit:");
    scanf("%d",&n);
    printf("Enter the values:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter the number :");
    scanf("%d",&number);
    frequency = 0;
    for(i=0;i<n;i++){
        if(a[i] == number){
            frequency = frequency+1;;
        }
    }
    printf("Frequency :%d",frequency);
}
