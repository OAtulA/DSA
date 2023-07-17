// https://leetcode.com/problems/reverse-integer/

public class solution {

    public int reverse(int x) {

        int ans = 0, sign = 1;
        // to help with addition
        if (x < 0) {
            sign = -1;
            x = -x;
        }

        while (x > 0) {
            ans = ans * 10 + x % 10;

            x /= 10;
        }

        // set sign

        return sign * ans;
    }

    public static void main(String[] args) {

    }
}
