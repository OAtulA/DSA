package Striver_SDE_Sheet.Array.set_matrix_zeros;

import java.util.ArrayList;

class set_zero {
    public static void setZeroes(int[][] matrix) {
        int[][] matrix2 = matrix;
        // int[] row = new int[matrix[0].length];
        // int[] column = new int[matrix.length];
        
        ArrayList<Integer> row = new ArrayList<Integer>();
        ArrayList<Integer> col = new ArrayList<Integer>();

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                if (matrix[i][j] == 0) {
                    row.add(i);
                    col.add(j);
                }
            }
        }
        // row set to 0
        for (int i = 0; i < row.size(); i++) {
            int r = row.get(i);
            for (int j = 0; j < matrix[0].length; j++) {
                matrix[r][j] = 0;
            }
        }
        // column set to 0
        for (int i = 0; i < col.size(); i++) {
            int c = col.get(i);
            for (int j = 0; j < matrix.length; j++) {
                matrix[j][c] = 0;
            }
        }
        // printing results
        System.out.print("[");
        for (int i = 0; i < matrix.length; i++) {
            System.out.print("[");
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix2[i][j]);
                if (j != matrix[i].length - 1)
                    System.out.print(",");
            }

            if (i != matrix[i].length - 1)
                System.out.print(",");
            System.out.print("]");
        }

    }

    public static void main(String[] args) {
        int[][] mat = { { 0, 1, 2, 0 }, { 3, 4, 5, 2 }, { 1, 3, 1, 5 } };
        setZeroes(mat);
    }
}