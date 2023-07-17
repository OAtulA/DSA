package Patterns.Pattern_11;



// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661718455/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_11

public class Solution {
    void printTriangle(int n) {
        
        for (int l = 1; l <= n; l++) {

            int a= (l%2==0)? 0: 1  ;

            for (int c = 0; c < l; c++) {
                System.out.print(a+" ");
                a= a^1;
            }
            System.out.println();
        }
    }
    
    public static void main(String[] args) {
        Solution obj = new Solution();

        obj.printTriangle(5);
    }
}
