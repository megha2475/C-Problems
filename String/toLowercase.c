//Program to convert all uppercase letters to lowercase (without using built-in functions).

#include <stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter the string:");
    scanf("%s",str);
    
    while(str[i]!='\0'){
       if(str[i]>='A'&&str[i]<='Z'){
           str[i] = str[i]+32;
       }
    i++;  
    }
    printf("Lowercase string:%s",str);
}


