//Program to count the number of digits in a number

#include <stdio.h>
int main(){
    int num = 56194,i,count = 0;
    while(num!=0){
        int digit = num%10;
        count++;
        num = (num-digit)/10;
    }
    printf("%d",count);
}
