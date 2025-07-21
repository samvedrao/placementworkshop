class lcm{
    public static void main(String[] args) {
        lcm d=new lcm();
        int n=4;
        int a[n]={4,5,6,7};
        
    }
     int lcc(int num1,int num2){
        int max;
       
        if(num1>num2)
        max=num1;
        else
        max=num2;
            int l=max;
        while(true){
            if(l%num1==0&l%num2==0){
               return l; 
            }
            l+=max;
        }
     }
}