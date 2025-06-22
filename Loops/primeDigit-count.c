//Program to count how many digits are present in a number

#include <stdio.h>
int main(){
    int i,digit,num = 38759,flag,count=0;
    while(num!=0){
        digit = num%10;
        
        flag = 0;
        for(i=2;i<digit/2;i++){
            if(digit%i==0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            count++;
        }
        num = num/10;
    }
    printf("Count:%d",count);
}
