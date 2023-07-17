// Power Of Numbers
// https://practice.geeksforgeeks.org/problems/power-of-numbers-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=power-of-numbers

import java.io.*;

class Solution {

    public static long power(int N, int R) {
        long n = N, r = R;
        if (N == 1 || N == -1 || N == 0) {
            return n;
        }

        long num = 1;
        

        // if(r <0) return 1/n*power(N, -R);

        if (r < 0) {
            num = 1 / n;
            r = -r;
        }
        // else r-=1; //for positive nums since we already did num to 1
        while (r > 0) {
            if (r % 2 == 0) {
                num = num * num;
                r = r / 2;
            } else {
                num *= N;
                r -= 1;
            }

        }
        num = (long) (num % Math.pow(10, 9));
        return num;

    }

    public static void main(String[] args) throws IOException {
        System.out.println(power(2, 5));
    }
}
