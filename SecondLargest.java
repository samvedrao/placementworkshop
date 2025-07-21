public class SecondLargest {
    public static void main(String[] args) {
        int a = 3000, b = 50000, c = 834;
        int second;

        if ((a > b && a < c) || (a > c && a < b)) {
            second = a;
        } else if ((b > a && b < c) || (b > c && b < a)) {
            second = b;
        } else {
            second = c;
        }

        System.out.println("Second largest number is: " + second);
    }
}
