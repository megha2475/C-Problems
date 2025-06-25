//Program to count the number of vowels in a string.

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    
    int i=0,count = 0;
    while(str[i]!='\0'){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            count = count+1;
        }
        i++;
    }
    printf("Vowels count:%d",count);
    
}
