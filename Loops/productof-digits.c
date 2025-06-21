//Program to find the product of digits in a number

#include <stdio.h>
int main(){
    int i,digit,product = 1,num = 2398;
    while(num!=0){
        digit = num%10;
        product *= digit;
        num = (num-digit)/10;
    }
    printf("Product of digits:%d",product);
}
