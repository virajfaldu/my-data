//Declare an abstract class Vehicle with an abstract method named numWheels().provide subclasses Car and Truck that each implements this method. Create instance of these subclasses and demonstrate the use of this method

abstract class Vehicle{

    abstract public void numwheel();
}

class car extends Vehicle{

    public void numwheel(){
        System.out.println("\n car has 4 wheel");
    }
}
class truck extends Vehicle{

    public void numwheel(){
        System.out.println("\n track has 6 wheel");
    }
}

class Example{

    public static void main(String []args){

        car c1 = new car();
        truck t1 = new truck();

        c1.numwheel();
        t1.numwheel();
    }
}