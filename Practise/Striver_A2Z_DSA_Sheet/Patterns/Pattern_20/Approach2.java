

public class Approach2 {
    void printTriangle(int n){

        for (int i = 1; i < 2*n; i++) {

            // To print i stars from 1 to n line
            // Then print decreasing stars
            int stars= (i<=n)? i: 2*n -i ;

            //first decreasing the spaces till n.
            // then increase them
            int spaces = (i<=n)? 2*(n-i) : 2*(i-n)  ;
            
            //print stars
            for (int j = 0; j < stars; j++) {
                System.out.print("*");
            }

            //print spaces
            for (int j = 0; j < spaces; j++) {
                System.out.print(" ");
            }

            //print stars
            for (int j = 0; j < stars; j++) {
                System.out.print("*");
            }

            System.out.println();
        }
    }

    public static void main(String[] args) {
        Approach2 oj = new Approach2();

        oj.printTriangle(5);
    }
}
