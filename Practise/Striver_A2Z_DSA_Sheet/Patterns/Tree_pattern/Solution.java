package Patterns.Tree_pattern;
class Solution{

    void printTriangle(int n) {
        
        int c =1;
        
        for (int i =0; i<n; i++ ) {
            for (int j=n-i -1; j>0; j--) System.out.print(" ");
            
            for (int k=1; k<=c ; k++)  System.out.print("*");
            
            System.out.println();
            
            c+=2; 
        }
    }

    public static void main(String[] args) {

        Solution obj = new Solution();

         obj.printTriangle(5);
        System.out.println();
        String s =  "     *";
        System.out.println("Output lenght: "+ s.length() );
        System.out.println();
        System.out.println("Expected length: "+ "    *".length() );
    }
}