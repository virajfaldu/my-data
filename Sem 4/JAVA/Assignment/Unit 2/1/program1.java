public class program1{

    public static void main(String []args)
    {

        System.out.print("Number from cmd : ");
        int number[]= new int[10];

        for(int i=0;i<args.length;i++){

            number[i]=Integer.parseInt(args[i]);
            System.out.print(number[i]+",");
        }

        for(int i=0;i<args.length;i++){
                for(int j=0;j<args.length;j++){
                    if(number[j]>number[j+1]){
                        int tmp;
                        tmp=number[j];
                        number[j]=number[j+1];
                        number[j+1]=tmp;
                    }
                }
        }

        System.out.print("\nsorted list ");
        for(int i=0;i<args.length;i++){
            System.out.print(number[i]+" ");
        }
    }
}