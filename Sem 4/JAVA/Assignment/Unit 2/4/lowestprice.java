//Write program to create an array of company name and another array of price quoted by the company. Fetch the company name who has quoted the lowest amount. 

import java.util.Scanner;

public class lowestprice {

    public static void main(String []args){

        String []array1 = new String[50];
        int []array2 = new int[5];

        Scanner scan= new Scanner(System.in);

        System.out.println("\nEnter Company Names and Price : ");
        for(int i=0;i<5;i++){
                System.out.print("company"+(i+1)+" : ");
                array1[i]=scan.nextLine();                
        }
        System.out.println("\n");
        for(int i=0;i<5;i++){
                System.out.print("price"+(i+1)+" : ");
                array2[i]=scan.nextInt();                
        }

        int min=9999999,position=0;
         for(int i=0;i<5;i++){
             if(min>array2[i]){
                 min=array2[i];
                 position=i;
             }
         }

        System.out.println("\n"+array1[position]+"Has Lowest price");
    }
}


