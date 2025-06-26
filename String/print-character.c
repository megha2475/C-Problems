//Program to print each character of a string on a new line.

#include <stdio.h>
int main() {
    int i=0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    
    while(str[i]!='\0'){
        printf("%c\n",str[i]);
        i++;
    }
}
