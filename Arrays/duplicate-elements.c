//Program to find the duplicate elements in an array

#include <stdio.h>
int main(){
    int i,j,a[6] = {3,9,2,1,3,2},k;
    
    printf("Duplicates are:");
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
          if(a[i]==a[j]){//got duplicates
             int existed = 0;
             for(k=0;k<i;k++){
                 if(a[k] == a[i]){
                     existed = 1;
                     break;
                 }
             }
             if(existed == 0){
                printf("%d ",a[i]);
            }
          }
        }
    }
}



