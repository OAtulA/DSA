

// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8

public class Solution {
    void printTriangle(int n) {
        int c = 1+ 2*(n-1);

        for (int l = 0; l < n; l++) {
            
            for (int spc = 0; spc <  l; spc++) {
                System.out.print(" ");
            }
            for (int str = 1; str <= c; str++) {
                System.out.print("*");       
            }
            c-=2;
            System.out.println();


        }

    }


    public static void main(String[] args) {
        Solution obj = new Solution();
        obj.printTriangle(5);
        System.out.println(" Ohio k Bhaiyo");
    }
}
