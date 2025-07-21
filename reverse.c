#include<stdio.h>
void main(){
int num;
// printf("enter the num to rev")
int reverse(int n);
num=reverse(96);
printf("%d",num);
}

int reverse(int num){
    int r=0;
    while(num>0){
        r=r*10+num%10;
        num=num/10;

    }
    return r;
}