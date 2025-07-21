import java.lang.*;
import java.util.Scanner;
public class value {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number");
        double n=sc.nextDouble();
        System.out.println("enter places");
        double place=sc.nextInt();
        double deno=n*Math.pow(10,place);
        double res=deno/Math.pow(10,place);
        System.out.println(res);
    }
}
