abstract class vegetables{

    String color="";
   abstract String tostring();

}

class cabbage extends vegetables{

    String tostring(){
        color="green";
        return color;
    }
}

class carrot extends vegetables{

    String tostring(){
        color="red";
        return color;
    }
}

class potato extends vegetables{

    String tostring(){
        color="yellow";
        return color;
    }
}

public class Example{

    public static void main(String []args){

        cabbage c1=new cabbage();
        carrot cr1=new carrot();
        potato p1 = new potato();

        System.out.println("\n Cabbage color is "+c1.tostring());
        System.out.println("\n Carrot color is "+cr1.tostring());
        System.out.println("\n Potato color is "+p1.tostring());
    }

}