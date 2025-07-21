#include<stdio.h>
#include<math.h>
void main(){
    int num=2;
    for(int i=0;i<num/2;i++){
        if(pow(2,i)==num){
            printf("is a power of two");
        }else{
            printf("not a power");
        }
    }
}