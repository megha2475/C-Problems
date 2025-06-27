//Program to count how many digits in a number are even and greater than 5.

#include <stdio.h>
int main(){
    int i,num = 458676,digit,count=0;
    while(num!=0){
        digit = num%10;
        if(digit%2==0 && digit>5){
            count++;
        }
        num = num/10;
    }
    printf("Count :%d",count);
}
