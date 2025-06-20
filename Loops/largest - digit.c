//// Program to find the largest digit in a number

#include <stdio.h>

int main() {
    int max = 9,i,num = 6217;
    while(num!=0){
        int digit = num%10;
        if(digit<max){
            max = digit;
        }
        num = (num-digit)/10;
    }
    printf("%d",max);
}
