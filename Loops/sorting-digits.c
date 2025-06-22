//Program to check if the digits in a number are in ascending order

#include <stdio.h>
int main() {
    int i,digit,num = 12621,original = num,lastDigit,secondlastDigit,isAscending = 0;
    
    while(num!=0){
        digit = num%100;
        lastDigit = digit % 10;
        secondlastDigit = digit / 10;
        
        if(lastDigit < secondlastDigit){
            isAscending = 1;
            break;
        }
        num = num/10;
    }
    if(isAscending == 0){
        printf("Digits are in Ascending order:%d",original);
    }else{
        printf("Digits are not in Ascending order");
    }
}
