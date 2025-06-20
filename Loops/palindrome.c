//Program to check a number is palindrome

#include <stdio.h>

int main(){
    int i,num = 126721,reverse = 0,original = num;
    while(num!=0){
        int digit = num%10;
        reverse = reverse*10 + digit;
        num = (num-digit)/10;
    }
    if(original == reverse){
        printf("Number is palindrome");
    }else{
        printf("Number is  not palindrome");
    }
}
