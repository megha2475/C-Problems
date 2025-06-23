//Program to print all 3 digit numbers where:the first digit + last digit == middle digit

#include <stdio.h>
int main (){
    int i,digit,num,lastDigit,firstDigit,middleDigit;
    
    printf("Numbers are:");
    for(num=100;num<=999;num++){
        firstDigit = num/100;
        lastDigit = num%10;
        middleDigit = (num/10)%10;
        
        if(middleDigit == lastDigit+firstDigit){
            printf("%d\n",num);
        }
    }
}
