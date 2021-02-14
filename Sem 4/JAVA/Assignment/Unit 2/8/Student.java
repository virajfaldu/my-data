import java.util.Scanner;
interface Exam{
    Boolean pass(int marks);
}
interface Classify{
    String division(int avg);
}

class Result implements Exam,Classify{

    public Boolean pass(int marks){

        if(marks>=35){
            return true;
        }
        else{
            return false;
        }
    }

    public String division(int avg){

        if(avg>=60)
        {
            return "first";
        }
        else if (avg>=50 && avg<60){
            return "second";
        }
        else{
            return "no class";
        }
    }
}

class Student{

    public static void main(String []args){
        Result r1 = new Result();
        Scanner scan=new Scanner(System.in);
        int ch=0;
        do{

            System.out.println("\n\n1. Check Result");
            System.out.println("2. Check Devision");
            System.out.println("3. Exit");

            System.out.print("\nEnter Yout Choice : ");
            ch=scan.nextInt();

            if(ch==1)
            {
                System.out.print("\nEnter Your Marks : ");
                int marks = scan.nextInt();

                if(r1.pass(marks)){
                    
                    System.out.println("\nCongratulation You passed in this exam");
                }
                else{
                    System.out.println("\nsorry You could not pass this exam ");
                }
            }
            
            else if(ch==2)
            {
                System.out.print("\nEnter Your Average : ");
                int avg = scan.nextInt();

                System.out.println("\n"+r1.division(avg));
            }

        }while(ch!=3);
    }
}
