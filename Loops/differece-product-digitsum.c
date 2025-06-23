//Program to find the difference between the product and sum of digits in a number.

#include <stdio.h>
int main(){
    int i,digit,num = 43192,digitSum = 0,product = 1;
    
    while(num!=0){
        digit = num%10;
        digitSum += digit;
        product = product*digit;
        num = num/10;
    }
    
    int difference = (product-digitSum);
    printf("Difference :%d",difference);
}
