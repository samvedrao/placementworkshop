public class hcf {
    public static void main(String[] args) {
        int num1=12,num2=24, min=0,hcf=0;
        if(num1<num2)
        min=num1;
        else
        min=num2;
               while(min>0){
                if(num1%min==0&num2%min==0)
                {
                    hcf=min;
                    break;
                }
                            min--;
                
                }
                      System.out.println(hcf);
    }
}
