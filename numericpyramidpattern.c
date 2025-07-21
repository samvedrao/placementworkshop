#include<stdio.h>
void main(){
    int n=6;
      int u=0;
       for(int i=3;i>0;i--){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
        //   if(u>9){
        //     if(u>9&&u%2==0)
        //     u=0;
        //     else
        //     u=1;
        //   }
          
          
          u=u+1;   
        printf("%d ",u);
       
        }
        printf("\n");
    }
    for(int i=0;i<n-2;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
             u--;
            printf("%d ",u);
            
            
        }
        printf("\n");
    }
 
}