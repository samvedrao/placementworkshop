#include<stdio.h>
void main(){
   int  arr[10]={-5, 1, 5, 0, -7};
   
   int sum=0;
     int max=0;
   for(int i=0;i<5;i++){
    sum+=arr[i];
    if(arr[i]>max){
        max=arr[i];
        
    }
   }
  

   printf("%d",max);

}