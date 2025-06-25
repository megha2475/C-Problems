//Program to count the count of consonants in a string.

$include <stdio.h>
  int main(){
    int i=0,count = 0;
    char str[100];
    printf("Enter the string:");
    scanf("%s",str);
    
    while(str[i]!='\0'){
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
            count++;
        }
        i++;
    }
    printf("Count of consonants:%d",count);
}
