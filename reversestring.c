#include<stdio.h>
#include<string.h>
vooid main(){
    char str[]="abcd";
    reverse(str);
    printf("%s",str);
}



void reverse(char *p){
    int *i=0;
    int *j=strlen(p)-1;
    char *temp;
    while(j>i){
        *temp=*i;
        *i=*j;
        *j=*i;
    }
}