class revpyramid {
    public static void main(String[] args) {
        int n=5;
        for(int i=1;i<n;i++){
            
            for(int j=0;j<i;j++){
                System.out.println("*");
            }
            for(int k=1;k<=i+1*2;k++)
            System.out.println("_");
               System.out.println("\n");
        }
    }
}
