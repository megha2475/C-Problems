//Program to check if a number is strong(sum of factorial of digit = number)

#include <stdio.h>
int main(){
    int i,num = 145,temp = num,digit,factorial,digitSum = 0;
    
    while(num!=0){
        digit = num%10;
        factorial = 1;
        for(i=1;i<=digit;i++){
            factorial = factorial*i;
        }
        digitSum = factorial+digitSum;
        num = (num-digit)/10;
    }
    if(temp == digitSum){
        printf("Number is strong:%d",temp);
    }else{
        printf("Number is not strong");
    }
}
