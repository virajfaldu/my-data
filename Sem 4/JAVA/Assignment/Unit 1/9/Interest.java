/*A bank gives 6.5% per annum interest on deposits made in that bank. Write a
program to calculate the total amount that a person will receive after the end of
5 years for a deposit of Rs.5000 for compound interest. Create necessary
methods and constructors too.*/

/*A = P (1 + r/k) (kn);
PN is the balance in the account after N years.
P0 is the starting balance of the account (also called initial deposit, or principal)
r is the annual interest rate in decimal form
k is the number of compounding periods in one year
If the compounding is done annually (once a year), k = 1.
If the compounding is done quarterly, k = 4.
If the compounding is done monthly, k = 12.
If the compounding is done daily, k = 365
*/


public class Interest{

	public static void main(String []args){
	
		int p=5000,k=1,n=5;
		float r=6.5f/100;
		double a,raiseto=1;
		
		
		a=(1 + (r/k));
		for(int i=0;i<n;i++){
			raiseto=raiseto*a;
		}
		a=p*raiseto;
		System.out.println(a);
		
	}
}

