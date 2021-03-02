
class example{

    public static void main(String []args){

        try{
            if(args.length==0){
                throw new NullPointerException("this program want value");
            }
        }
        finally{}

        int myarray[]=new int[args.length];
        for(int i=0;i<args.length;i++)
        {
            myarray[i]=Integer.parseInt(args[i]);
        }
        
        int a=0;
        try{
            while(a<args.length){
                for(int i=0;i<args.length;i++){
                    if(myarray[i]<0 || myarray[i]>100){
                        throw new ArithmeticException("Enter valid age");
                    }
                    a++;
                }
            }
            double avg=0;
            int sum=0;
            for(int i=0;i<args.length;i++){
                sum=sum+myarray[i];
            }

            avg=(double)sum/args.length;

            System.out.println("Average is "+avg);

        }
        catch(ArithmeticException e){
            System.out.println("Exception : "+e.getMessage());
        }
    }
}