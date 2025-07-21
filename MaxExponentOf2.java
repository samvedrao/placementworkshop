public class MaxExponentOf2 {
    
    public static void main(String[] args) {
        int a = 21, b = 25;
        int maxExponent = -1;
        int result = -1;

        for (int i = a; i <= b; i++) {
            int temp = i;
            int count = 0;

           
            while (temp % 2 == 0) {
                count++;
                temp /= 2;
            }

           
            if (count > maxExponent) {
                maxExponent = count;
                result = i;
            }
            
            else if (count == maxExponent && i < result) {
                result = i;
            }
        }

        System.out.println("Number  " + result);
    }
}
