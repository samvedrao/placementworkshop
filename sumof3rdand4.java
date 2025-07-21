public class sumof3rdand4 {
    public static void main(String[] args) {
        int num=387123;
        int num2=0;
        while(num!=0){
            int digit=num%10;
            num2=num2*10+digit;
            num=num/10;
        }

        System.err.println(num2);
        int num3=(num2/100)%10;
        
        System.out.println("num3   "+num3);
        int num4=(num2/1000)%10;
        int sum=num3+num4;
        System.out.println(sum);

    }
}
