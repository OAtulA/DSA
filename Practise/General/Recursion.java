package Practise.General;


class Recursion{

    public static void main(String[] args) {
        int ans= fibo(5);
        System.out.println("ans is : "+ ans);
    }

    private static int fibo(int n) {
        if(n<2) return 1;

        return fibo(n-1)+ fibo(n-2);

    }
}