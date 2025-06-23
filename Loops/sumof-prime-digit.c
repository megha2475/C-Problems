//Program to print the sum of only the prime digits of a number.

#include <stdio.h>
int main(){
    int num = 3456,temp = num,i,digit,digitSum = 0,flag;
    
    while(temp!=0){
        digit = temp%10;
        
        flag = 0;
        for(i=2;i<=digit/2;i++){
            if(digit%i==0){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            digitSum += digit;
        }
        
        temp = temp/10;
    }
    printf("Sum of digit:%d",digitSum);
}
