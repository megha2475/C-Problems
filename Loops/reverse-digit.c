//Program to reverse the digits of a number without using arithematic operatons

#include <stdio.h>

int main(){
    int i,num = 1234,digit,reversed = 0;
    
    while(num!=0){
        digit  = num%10;
        reversed = reversed*10+digit;
        num = num/10;
    }
    printf("The reversed number is:%d",reversed);
}
