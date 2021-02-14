// Write an interface called numbers, with a method in Process(int x, int y). Write a class called Sum, in which the method Process finds the sum of two numbers and returns an int value.
// Write another class called Average, in which the Process method finds the average of the two numbers and returns an int. 

interface numbers{

    int Process(int x,int y);
}

class sum implements numbers{

    public int Process(int x,int y){
        return x+y;
    }
}

class average implements numbers{

    public int Process(int x,int y){
        return (x+y)/2;
    }
}

public class Example{

    public static void main(String []args){

        sum s1 = new sum();

        average a1= new average();

        System.out.println(s1.Process(3,5)+" "+a1.Process(3,5));
    }
}