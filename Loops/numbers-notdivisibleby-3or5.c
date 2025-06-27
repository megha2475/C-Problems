//Program to print numbers from 1 to 500 that are not divisible by 3 or 5.

#include <stdio.h>
int main() {
    int i=1;
    for(i=1;i<=500;i++){
        if(i%3!=0 && i%5!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}
