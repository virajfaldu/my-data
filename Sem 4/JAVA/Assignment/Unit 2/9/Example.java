// Create class calculation with an abstract method area( ). Create Rectangle and Triangle subclasses of calculation and find area of rectangle and triangle

abstract class calculation{

    abstract void area(int h,int b);
}

class rectangle extends calculation{
    public void area(int h,int b){
        System.out.print("\nRectangle "+(h*b));
    }
}

class triangle extends calculation{

    public void area (int h,int b){
        System.out.println("\ntringle "+(h*b)/2);
    }
}

class Example{

    public static void main(String []args){
    rectangle r1 = new rectangle();
    triangle t1 = new triangle();

    r1.area(3,2);
    t1.area(2,2);
    }
}