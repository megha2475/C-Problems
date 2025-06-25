//Program to reverse a string using a loop.

#include <stdio.h>
int main(){
    int i=0,length = 0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    
    while(str[length]!='\0'){
        length++;
    }
    printf("Reversed string:");
    for(i=length-1;i>=0;i--){
        printf("%c",str[i]);
    }
}
