//program to check if a number is perfect number(sum of its divisors = number)

#include <stdio.h>
int main(){
    int i,num = 16,divisor = 0,temp = num;
    for(i=1;i<num;i++){
        if(num%i==0){
            divisor += i;
        }
    }
    if(divisor==temp){
        printf("Number is perfect:%d",temp);
        }else{
            printf("number is not perfect");
        }
}
