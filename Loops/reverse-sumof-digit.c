//Program to prints the sum of its digits in reverse.

#include <stdio.h>
int main(){
    int i,digit,num,digitSum = 0,rev = 0,sumDigit;
    printf("Enter a number:");
    scanf("%d",&num);
    
    while(num!=0){
        digit = num%10;
        digitSum += digit;
        num = num/10;
    }
    while(digitSum!=0){
        sumDigit = digitSum%10;
        rev = rev*10+sumDigit;
        digitSum = digitSum/10;
    }
    printf("Reversed number:%d",rev);
}
