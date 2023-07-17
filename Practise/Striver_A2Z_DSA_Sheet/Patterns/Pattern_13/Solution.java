package Patterns.Pattern_13;



public class Solution {
    

    public static void main(String[] args) {
        Solution obj = new Solution();

        obj.printTriangle(5);
    }

    private void printTriangle(int n) {
        int c=1;
        for (int i = 1; i <= n; i++) {
            
            for (int j = 1; j <= i; j++) {
                System.out.print(c++ + " ");                                
            }
            System.out.println();
        }
    }
}
