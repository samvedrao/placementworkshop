public class StarPyramid {
    public static void main(String[] args) {
        int n = 5;  // You can change this for different heights

        for (int i = 0; i < n; i++) {
            // Print spaces
            for (int j = 0; j < n - i - 1; j++) {
                System.out.print(" ");
            }

            // Print stars
            for (int k = 0; k < (2 * i + 1); k++) {
                System.out.print("*");
            }

            System.out.println();  // Move to the next line
        }
    }
}
