#include<stdio.h>
void main(){
    int arr[3]={7,7,3};
    if(arr[0]==arr[1]==arr[2]){
        printf("equal");
    }else{
        if(arr[1]==arr[2]){
            printf("%d",arr[0]);
        }else if(arr[0]==arr[2]){
            printf("%d",arr[1]);

        }else{
            printf("%d",arr[2]);
        }

    }

    
  
}