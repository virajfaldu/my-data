import java.util.Scanner;

public class ArrayExample{

   
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);

        int arry[] = new int[5];

        for(int i=0;i<5;i++){

            arry[i]=scan.nextInt();
        }

        for(int i=0;i<5;i++){

            System.out.print(arry[i]+",");
        }
        
    }
}