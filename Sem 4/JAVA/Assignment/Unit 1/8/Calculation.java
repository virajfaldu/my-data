/*Create a complex number class. The class should have a constructor and
methods to add, subtract and multiply two complex numbers and to return the
real and imaginary parts*/

class ComplexNumber{

	public float real,imaginary;
	
	ComplexNumber(float r,float i){
		real=r;
		imaginary=i;
	}
	
	public ComplexNumber add(ComplexNumber c2){
		
		ComplexNumber ans = new ComplexNumber(0,0);
		
		ans.real=real+c2.real;
		ans.imaginary=imaginary+c2.imaginary;
		
		return ans;
	}
	public ComplexNumber subtract(ComplexNumber c2){
		
		ComplexNumber ans = new ComplexNumber(0,0);
		
		ans.real=real-c2.real;
		ans.imaginary=imaginary-c2.imaginary;
		
		return ans;
	}
	public ComplexNumber multiplication(ComplexNumber c2){
		
		ComplexNumber ans = new ComplexNumber(0,0);
		
		ans.real=real*c2.real;
		ans.imaginary=imaginary*c2.imaginary;
		
		return ans;
	}
}

public class Calculation{

	public static void main(String []args){
			
		ComplexNumber c1 = new ComplexNumber(9.4f,1.7f);
		ComplexNumber c2 = new ComplexNumber(2.4f,3.6f);
		ComplexNumber ans = new ComplexNumber(0,0);
		
		ans = c1.add(c2);
		System.out.println("Addition is "+ans.real+" + "+ans.imaginary+"i");
		
		ans = c1.subtract(c2);
		System.out.println("Subtraction is "+ans.real+" + "+ans.imaginary+"i");
		
		ans = c1.multiplication(c2);
		System.out.println("multiplication is "+ans.real+" + "+ans.imaginary+"i");
	}
}

