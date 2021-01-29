/*Write a program to calculate the area of square
and rectangle by overloading the area method.*/

import java.util.*;

public class Area{
	
	public Area(int l){
		int area = l*l;
		System.out.println("Area Of Square "+area);
	}
	public Area(int l,int w){
		int area = l*w;
		System.out.println("Area of Rectangle "+area);
	}
}

class RunProgram{
	public static void main(String[] args){
	
		int l,w;
		Scanner scan = new Scanner(System.in);
		
		System.out.println("\nEnter Your Lenght For Square : ");
		l = scan.nextInt();		
		Area Square = new Area(l);
		
		System.out.println("\nEnter Your Lenght For Rectagle : ");
		l = scan.nextInt();
		System.out.println("Enter Your Lenght For Rectagle : ");
		w = scan.nextInt();
		Area Rectangle = new Area(l,w);
	
	}
}
