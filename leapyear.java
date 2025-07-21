class leapyear  {
    public static void main(String args[]){
        int num=2004;
        int leap=0;
        if(num%100==0){
            if(num%400==0)
            {
                leap=1;
            }
        }else if(num%4==0&&num%400!=0){
            leap=1;
        }
        System.out.println(leap);
    }

}
