//Program to find t he sum of only even digits in a number

#include <stdio.h>
int main(){
    int i,evenSum = 0,digit,num = 41892;
    while(num!=0){
        digit = num%10;
        if(digit%2==0){
            evenSum += digit;
        }
        num = (num-digit)/10;
    }
    printf("Sum of even digits:%d",evenSum);
}
