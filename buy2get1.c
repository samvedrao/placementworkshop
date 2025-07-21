#include<stdio.h>
int main(){
    int tot_prod_sold=100;
    int tot_single_saled=11;
    int total_mrp=0;
    int rej=10;
    total_mrp=((tot_prod_sold-tot_single_saled-(rej*2))/3)*2+tot_single_saled+rej*2;
    printf("%d",total_mrp);
} 