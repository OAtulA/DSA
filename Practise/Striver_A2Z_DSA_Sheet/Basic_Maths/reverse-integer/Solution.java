// https://leetcode.com/problems/reverse-integer/

class Solution {
    public int reverse(int x) {

        int ans = 0, sign = 1;
        // to help with addition
        if (x < 0) {
            sign = -1;
            
            //as Integer.MIN_VALUE = -Integer.MAX_VALUE  -1 so can't reverse.
            if(x== Integer.MIN_VALUE) return 0;
            x = -x;
        }

        while (x > 0) {

            // to check if the generated number is bigger than maxInt32
            if (ans > Integer.MAX_VALUE/10 || (ans== Integer.MAX_VALUE/10 && x%10 >7) ) {
                return 0;
            }

            ans = ans * 10 + x % 10;

            x /= 10;
        }

        // set sign

        return sign * ans;
    }

    public static void main(String[] args) {

        Solution on = new Solution();

        int ans = on.reverse(-2147483647);
        System.out.println();
        System.out.println(ans);
    }
}