//Write a program to find sum of two matrices of 3 x3.


import java.util.Scanner;

public class Matrix {

    public static void main(String []args){

        int [][]array1 = new int[3][3];
        int [][]array2 = new int[3][3];
        int [][]answer = new int[3][3];

        Scanner scan= new Scanner(System.in);

        System.out.println("\nEnter your Matrix1 : ");

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                array1[i][j]=scan.nextInt();
            }
        }

        System.out.println("\nEnter your Matrix2 : ");

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                array2[i][j]=scan.nextInt();
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                answer[i][j]=array1[i][j]+array2[i][j];
            }
        }

        System.out.print("\nYour Answer : ");

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                 System.out.print(" "+answer[i][j]);
            }
        }
    }
}
