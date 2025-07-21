#include<stdio.h>
void main(){
    int n=5;
       for(int i=4;i>0;i--){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){

            printf("%d ",j+1);
            
        }
        printf("\n");
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){

            printf("%d ",j+1);
            
        }
        printf("\n");
    }
 
}