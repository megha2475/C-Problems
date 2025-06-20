// program to check if a number is an amstrong number

#include <stdio.h>
int main(){
    int num = 113,original = num,i,cube = 0;
    while(num!=0){
        int digit = num%10;
        cube = cube + (digit*digit*digit);
        num = (num-digit)/10;
    }
    if(original == cube){
        printf("Number is an Amstrong number");
    }else{
        printf("NUmber is not an amstrong number");
    }
}
