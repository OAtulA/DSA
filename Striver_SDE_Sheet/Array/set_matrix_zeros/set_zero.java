import java.io.*;

class set_zero {
    public static void setZeroes(int[][] matrix) {
        int[][] matrix2 = matrix;
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
/*
                if(matrix[i][j]==0){
                    for (int m = 0; m < matrix.length; m++) {
                        matrix[m][j]=0;//row set to 0
                        matrix[i][m]=0; //column set to 0
                    }
                } 
 */
                if(matrix[i][j]==0){ //column set to 0
                    int column=matrix.length;
                    for (int j2 = 0; j2 < column; j2++) {
                        matrix2[j2][j]=0;
                    }
                    int row = matrix[i].length;
                    for (int k = 0; k < row; k++) {//row set to 0
                        matrix2[i][k] =0;
                    }
                }                       
            }
        }
        System.out.print("[");
        for (int i = 0; i < matrix.length; i++) {
        System.out.print("[");
         for (int j = 0; j < matrix[i].length; j++) {
            System.out.print(matrix2[i][j]);    
            if(j!= matrix[i].length-1) System.out.print(",");
         }   
         
         if(i!= matrix[i].length-1) System.out.print(",");
         System.out.print("]");
        }
        System.out.println("]");                   
        // System.out.print(matrix[i]);
    }

    public static void main(String[] args) {
        int[][] matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
        setZeroes(matrix);
    }
}