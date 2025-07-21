#include<stdio.h>
#include<string.h>

void main(){
    char s[]="samved@gmail.com";
    char g[]="@gmail.com";
      int j=sizeof(s)-1;
    for(int i=sizeof(g)-1;i>0;i--){
      
        if(g[i]!=s[j])
        printf("not valid");
        j--;
    }



}