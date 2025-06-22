//Program to find the second largest digit in a number

#include <stdio.h>
int main(){
    int i,digit,num = 80512,maxValue = 0,secondmaxValue;
    
    while(num!=0){
        digit = num%10;
        if(digit>maxValue){
            secondmaxValue = maxValue;
            maxValue = digit;
        }else if(maxValue != secondmaxValue && digit>secondmaxValue){
            secondmaxValue = digit;
        }
        num = num/10;
    }
    printf("Max value is:%d\n",maxValue);
    printf("Second max value:%d",secondmaxValue);
}
