// program to reverse a number

#include <stdio.h>
int main(){
    int i,num = 123,reverse=0;
    while(num!=0){
        int digit = num%10;
        reverse = digit+reverse*10;
        num = (num-digit)/10;
    }
    printf("%d",reverse);
}
