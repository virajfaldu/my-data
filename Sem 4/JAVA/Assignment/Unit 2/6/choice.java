import java.util.Scanner;
class numberdata{

    int array[]=new int[5];
    public numberdata(int []array){
        for(int i = 0; i<5;i++){
            this.array[i]=array[i];
        }
    }
}

class numplay extends numberdata{

    public numplay(int []array){
        super(array);
    }

    public void display(){ 

        System.out.print("\n Your Numbers : ");
         for(int i = 0; i<5;i++){
            System.out.print(" "+array[i]);
        }
    }

    public void sum(){
        int sum=0;

        for(int i = 0; i<5;i++){
            sum=sum+array[i];
        }
         System.out.print("\n Sum : "+sum);
    }

    public void average(){
        float avg=0f,sum=0f;

        for(int i = 0; i<5;i++){
            sum=sum+array[i];
        }
        avg=sum/5;
        System.out.print("\n Average : "+avg);
    }

    public void minimum(){

        int min=9999999;
         for(int i=0;i<5;i++){
             if(min>array[i]){
                 min=array[i];
             }
         }
        System.out.print("\n Minimum Number Is "+min);
    }

    public void maximum(){

        int max=-9999999;
         for(int i=0;i<5;i++){
             if(max<array[i]){
                 max=array[i];
             }
         }
        System.out.print("\n Maximum Number Is "+max);
    }
}

public class choice{

    public static void main(String []args){

        Scanner scan = new Scanner(System.in);
        int array1[]=new int[args.length];
        int ch=0;
 
        for(int i=0;i<args.length;i++){
            array1[i]=Integer.parseInt(args[i]);
        }
        numplay n1=new numplay(array1);
        do{

            System.out.println("\n\n 1. Display numbers entered");
            System.out.println(" 2. Sum of the number");
            System.out.println(" 3. Average of the numbers");
            System.out.println(" 4. Maximum of the numbers");
            System.out.println(" 5. Minimum of the numbers");
            System.out.println(" 6. Exit");

            System.out.print(" Enter Your Choice : ");
            ch=scan.nextInt();

            switch(ch){

                case 1:
                        n1.display();
                        break;                  
                case 2:
                        n1.sum();
                        break;
                case 3:
                        n1.average();
                        break;
                case 4:
                        n1.maximum();
                        break;
                case 5:
                        n1.minimum();
                        break;
                case 6:
                        System.out.println("\n Good Bye \n");
                        break;

            }


        }while(ch!=6);
    }
}