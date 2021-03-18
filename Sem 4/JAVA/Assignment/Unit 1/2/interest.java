public class interest{

    public static void main(String []args){

        float p=0f,r=10.75f,n=3f,EMI=0f;

        p = Float.parseFloat(args[0]);

        EMI = ((p * (r/100) * n) + p)/(n*12);

        System.out.println(EMI);
    }
}