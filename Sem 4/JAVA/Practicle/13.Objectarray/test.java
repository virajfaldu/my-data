import java.util.Scanner;
class employee{

    int x,y;
    employee(int x,int y){
        this.x=x;
        this.y=y;
    }
    void display(){
        System.out.println("\n"+x+y);
    }
}
class test{
    public static void main(String []args){
        int x,y;
        Scanner scan=new Scanner(System.in);
        employee emp[] = new employee[5];
        
        for(int i=0;i<5;i++){
            x=scan.nextInt();
            y=scan.nextInt();

            emp[i] = new employee(x,y);
            emp[i].display();
        }
        
    }
}
