//Program to count the how many timmes a digit appears in a number

#include <stdio.h>

int main(){
    int i,digit,count = 0,num = 37747,n = 7;
    
    while(num!=0){
        digit = num%10;
        if(n==digit){
            count++;
        }
        num = num/10;
    }
    printf("Count:%d",count);
}
