//Program to find the frequency of duplicate digits in a number

#include <stdio.h>
int main(){
    int digit,i,num = 8727127,a[10] = {0};
    
    while(num!=0){
        digit = num%10;
        a[digit]++;
        num = num/10;
    }
    printf("Duplicate digits are:\n");
    for(i=0;i<10;i++){
        if(a[i]>1){
            printf("Digits %d Frequency %d\n",i,a[i]);
        }
    }
}
