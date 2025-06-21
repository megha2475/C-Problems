//Program to find the first n prime numbers:

#include <stdio.h>
int main(){
    int i,flag,num,n = 100;
    for(num=2;num<=n;num++){
        flag = 0;
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            printf("number%d is a prime number\n",num);}
    }
}
