// package Patterns.Pattern_20;

public class Solution {
    void printTriangle(int n) {
        
        for (int l = 1; l < n+1; l++) {
            
            int i;

            for (i = 0; i < l; i++) {
                System.out.print("*");
            }

            for (int j = 2*(n-i) ; j > 0; j--) {
                System.out.print(" ");
            }

            for ( i = 0; i < l; i++) {
                System.out.print("*");
            }

            System.out.println();
        }

        for (int l = n-1; l > 0; l--) {
            
            int i;

            for (i = 0; i <l; i++) {
                System.out.print("*");
            }

            for (int j = 2*(n-i) ; j > 0; j--) {
                System.out.print(" ");
            }

            for ( i = 0; i < l; i++) {
                System.out.print("*");
            }

            System.out.println();
        }
        
    }

    public static void main(String[] args) {
        Solution obj = new Solution();
        obj.printTriangle(5);
    }
}
/*
 
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

 */