import java.util.Scanner;
class result{

    public static void main(String []args){

        Scanner scan = new Scanner(System.in);

        int sub[] = new int[3];

        
        int a =0;
        while(a<sub.length){
            for(int i=0;i<sub.length;i++){
                System.out.print("\nEnter your Subject "+(i+1)+" marks :" );
                sub[i]=scan.nextInt();
            }
            try{
                a=0;
                for(int i=0;i<sub.length;i++){
                    if(sub[i]<0 || sub[i]>100){
                        throw new ArithmeticException("Enter marks between 0 and 100");
                    }
                    else{
                        a++;
                    }
                }
            }
            catch(ArithmeticException e){
                System.out.println("\nException : "+e.getMessage());
            }
        }
        a=0;
        for(int i=0;i<sub.length;i++){
            if(sub[i]<40){
                System.out.println("\nyou couldn't pass this exam :( \n");
                break;
            }
            a++;
        }
        if(a>=sub.length){
            int sum=0;
            for(int i=0;i<sub.length;i++){
                sum=sum+sub[i];
            }
            double avg = (double)sum/3;

            System.out.println("\nyou passed this exam with "+avg+"%\n");
            
        }
    }
}