import java.util.*;
interface i1{
	
	void Deposit(long deposit);
	void ShowBalance();
	void Withdrawl(long withdrawl);	
}

class SavingAccount implements i1{

	public long balance;

	public void Deposit(long deposit){
		balance=balance+deposit;
	}
	
	public void ShowBalance(){
		System.out.println("\n balance : "+ balance);
	}
	
	public void Withdrawl(long withdrawl){
		if(balance>withdrawl){
			balance=balance-withdrawl;
		}
		else{
			System.out.println("\n Not Enough Balance.....");
		}
	}

}

class InterFaceExample{
	
	public static void main(String []args){

		long deposit,withdrawl;
		int ch;

		SavingAccount s1 = new SavingAccount();

		do{
		System.out.println("\n 1. Enter Deposit ");
		System.out.println("\n 2. Enter withdrawl ");
		System.out.println("\n 3. Show Balance ");
		System.out.println("\n 4. exit ");
	
		Scanner scan = new Scanner(System.in);

		System.out.print("\n Enter Your Choice : ");
		ch = scan.nextInt();
		
		if(ch==1){
			System.out.print("\n Enter Deposit ");
			deposit=scan.nextLong();

			s1.Deposit(deposit);

		}
		
		if(ch==2){
			System.out.print("\n Enter Deposit ");
			withdrawl=scan.nextLong();

			s1.Withdrawl(withdrawl);

		}
		
		if(ch==3){
			s1.ShowBalance();
		}	
		}while(ch!=4);	
		


	}


}