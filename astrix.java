public class astrix {
    public static void main(String[] args) {
        int n = 5; // number of rows

        for (int i = 0; i < n; i++) {
            // Print spaces
            for (int j = 1; j <= n - i - 1; j++) {
                System.out.print(" ");
            }

            // Print stars
            for (int k = 1; k <= (2 * i + 1); k++) {
                System.out.print("*");
            }

            // Move to next line
            System.out.println();
        }
    }
}
