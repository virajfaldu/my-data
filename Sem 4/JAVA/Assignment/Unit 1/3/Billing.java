/*A car accessories shop assigns code 1 to seat covers, 2 to steering wheel covers ,
3 to car lighting and 4 for air purifiers. All other items have code 5 or more.
While selling the goods, a sales tax of 2% to seat covers ,3% to steering wheel
3 covers, 4% to car lighting, 2.5% to air purifiers and 1.2% for all other items is
charged. A list containing the product code and price is given for making a bill.
Write a java program using switch statements to prepare a bill.*/

import java.util.*;

public class Billing{

	public static void main(String[] args){
		
		int ch;
		float tax=0,total=0;
		
		Scanner scan= new Scanner(System.in);
		do{

			System.out.println("\n1. Seat Cover");
			System.out.println("2. Steering Wheel Covers");
			System.out.println("3. Car Lighting");
			System.out.println("4. Air Purifiers");
			System.out.println("5. Other items");
			System.out.println("6. Print a Bill");
		
			System.out.println("\nEnter Your Choice : ");
			ch = scan.nextInt();
		
			switch(ch){
				case 1:
					
					tax = (float)(110*2)/100;
					total = total + tax + 110;
					break;
				case 2:
					
					tax = (float)(180*2)/100;
					total = total + tax + 180;
					break;
				case 3:
					
					tax = (float)(120*2)/100;
					total = total + tax + 120;
					break;
				case 4:
					
					tax = (float)(190*2)/100;
					total = total + tax + 190;
					break;
				case 5:
					
					tax = (float)(80*2)/100;
					total = total + tax + 80;
					break;
			}
		}while(ch!=6);
		
		System.out.println("\nYour Total Is "+total);
		
	}

}
