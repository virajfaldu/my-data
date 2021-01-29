/*A shop during festival season offers a discount 10% for purchase made up to Rs.1,000,
12% for purchase value of Rs.1,000 or more up to Rs 1,500 and 15% for purchase
value 8 of Rs.1,500 or more. Write a program to implement the above scheme for a
given sales and print out the sales and print out the sales value, discount and
net amount payable by a customer. Create necessary methods and constructors.*/

import java.util.*;

public class Buying{

	public static void main(String[] args){
		
		int ch;
		float tax=0,total=0,tem=0;
		
		Scanner scan= new Scanner(System.in);
		do{

			System.out.println("\n1. Shirt");
			System.out.println("2. T-Shirt");
			System.out.println("3. Pent");
			System.out.println("4. Dress");
			System.out.println("5. Sali");
			System.out.println("6. Print a Bill");
		
			System.out.print("\nEnter Your Choice : ");
			ch = scan.nextInt();
		
			switch(ch){
				case 1:
					total = total + 600;
					break;
				case 2:
					total = total + 400;
					break;
				case 3:
					total = total + 800;
					break;
				case 4:
					total = total + 500;
					break;
				case 5:
					total = total + 1100;
					break;
			}
		}while(ch!=6);
		
		if(total==1000){	
			tem=total*.10f;
			total=total-tem;
		}
		else if(total>1000 && total<=1500){
			tem=total*.12f;
			total=total-tem;
		}
		else if(total>1500){
			tem=total*.15f;
			total=total-tem;
		}
		System.out.println("\nYour Total Is "+total);
	}
}
