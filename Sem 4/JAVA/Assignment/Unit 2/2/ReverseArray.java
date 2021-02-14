// Write a program to create an array to store 5 integer values. Also initialize the array with 5 numbers and display the array Elements in reverse order.


import java.util.Scanner;
class ReverseArray{
	
	public static void main(String []args){
	Scanner scan = new Scanner(System.in);
	
	System.out.println("\nEnter Any Five Value : ");
	
	int array[] = new int[5];
	for(int i=0;i<5;i++){
		
		array[i]=scan.nextInt();
	}	
	
	System.out.print("Your Value In Reverse Order :");

	for(int i=4;i>=0;i--){
		
		System.out.print(" "+array[i]);
	}
}	
}