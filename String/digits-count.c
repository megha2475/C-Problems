//Program to count the number of digits in a string.

#include <stdio.h>
int main(){
    int i=0,count = 0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    
    while(str[i]!='\0'){
        if(str[i]>='0'&&str[i]<='9'){
            count++;
        }
        i++;
    }
    printf("Count:%d",count);
}
