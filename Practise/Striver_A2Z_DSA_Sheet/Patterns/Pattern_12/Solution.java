// package Patterns.Pattern_12;

// https://practice.geeksforgeeks.org/problems/double-triangle-pattern-1662664259/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_12


public class Solution {

    void printTriangle(int n) {
        int w= 4*n -1;

        w = w-2;
        for (int l = 1; l < n+1; l++) {
            
            for (int i = 1; i <= l; i++) {
                System.out.print(i+" ");
            }
            
            for (int spc = 1; spc < w; spc++) {
                System.out.print(" ");
            }

            w= w-4;

            for (int i = l; i >0; i--) {
                System.out.print(i+" ");
            }

            System.out.println();


        }
    }
    public static void main(String[] args) {
        Solution obj = new Solution();
        obj.printTriangle(5);
    }
}
