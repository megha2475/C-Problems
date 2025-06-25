//Program to convert all lowercase to uppercase.

#include <stdio.h>
int main(){
    int i=0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);

    while(str[i]!=0){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;
        }
        i++;
    }
    printf("uppercase string:%s",str);
}
