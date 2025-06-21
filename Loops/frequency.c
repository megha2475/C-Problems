// Program to find the of all digits in a number

#include <stdio.h>
int main(){
    int digit,i,num = 8721737,a[10] = {0};
    
    while(num!=0){
        digit = num%10;
        a[digit]++;
        num = (num-digit)/10;
    }
    for(i=0;i<10;i++){
        if(a[i]>0){
            printf("Digit %d Frequency %d\n",i,a[i]);
        }
    }
    
}
