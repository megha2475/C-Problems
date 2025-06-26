//Program to count how many times a specific character appears in a string.

#include <stdio.h>
int main(){
    int i=0,count=0;
    char str[100],character;
    printf("Enter the string:");
    scanf("%s",str);
    
    printf("Enter the character:");
    scanf(" %c",&character);
    
    while(str[i]!='\0'){
        if(str[i]==character){
            count++;
        }
        i++;
    }
    printf("count of character:%d",count);
}
