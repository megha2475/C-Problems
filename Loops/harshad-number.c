//Program to check whether a number is a Harshad number (number divisible by sum of its digits).

#include <stdio.h>
int main(){
    int i,num = 18,temp = num,digit,digitSum = 0;
    
    while(temp!=0){
        digit = temp%10;
        digitSum += digit;
        temp = temp/10;
    }
    if(num%digitSum ==0){
        printf("NUmber is a Harshad number:%d",num);
    }else{
        printf("Not a harshad number");
    }
}
