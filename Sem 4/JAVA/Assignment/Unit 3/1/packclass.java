package p;

class packclass{

    int a,b,c;

    packclass(int a,int b,int c){
        this.a=a;
        this.b=b;
        this.c=c;
    }

    void findmax(){

        if(a>b){
            if(a>c){
                System.out.println("\n "+a+" is greatest number");
            }
            else{
                System.out.println("\n "+c+" is greatest number");
            }
        }
        if(b>a){
            if(b>c){
                System.out.println("\n "+b+" is greatest number");
            }
            else{
                System.out.println("\n "+c+" is greatest number");
            }
        }
    }
}