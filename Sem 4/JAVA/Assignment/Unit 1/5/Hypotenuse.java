/*Write a program to calculate the hypotenuse of right angled triangle when other
sides of the triangle are given. (Hypotenuse = square root (x*x + Y *Y))*/
import java.util.*;
import java.lang.Math;
public class Hypotenuse{

	public static void main(String[] args){
	
		Float a=0f,b=0f;
		double Hypotenuse=0;

		Scanner scan = new Scanner(System.in);
		
		System.out.println(" Enter Your First Side : ");
		a = scan.nextFloat();
		
		System.out.println(" Enter Your Second Side : ");
		b = scan.nextFloat();
		
		Hypotenuse = Math.sqrt(a*a+b*b);

		System.out.println(Hypotenuse);
		
	}
} 

