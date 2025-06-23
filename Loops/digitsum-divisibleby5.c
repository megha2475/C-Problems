//Program to print all numbers between 1 to 1000 where the sum of digits is divisible by 5.

#include <stdio.h>
int main(){
    int i,digit,num,temp,digitSum;
    for(num=1;num<=1000;num++){
        temp = num,digitSum = 0;
        while(temp!=0){
            digit = temp%10;
            digitSum += digit;
            temp = temp/10;
        }
        if(digitSum%5==0){
            printf("%d\n",num);
        }
    }
}
