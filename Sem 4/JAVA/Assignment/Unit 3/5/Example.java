// Write a Java program to input n integer numbers and display lowest and second
// lowest number. Also handle the different exceptions possible to be thrown
// during execution.
import java.util.Scanner;
class Example{

    public static void main(String []args){

        int myarray[]=new int[args.length];

        for(int i=0;i<args.length;i++){
            myarray[i]=Integer.parseInt(args[i]);
        }
        
        int min=999999;
        try{
            if(args.length==0){
              throw new NullPointerException("enter proper values");
            }
            for(int i=0;i<args.length;i++){
                if(min>myarray[i]){
                    min=myarray[i];
                }
            }
            int smin=99999;
            for(int i=0;i<args.length;i++){
                if(min!=myarray[i]){
                    if(smin>myarray[i]){
                        smin=myarray[i];
                    }
                }
            }
            System.out.println("\n First Minimum Number is "+min);
            System.out.println("\n Second Minimum Number is "+smin);
        }
        catch(NullPointerException e){
            System.out.println("Exception : "+e.getMessage());
        }

        
    }
}