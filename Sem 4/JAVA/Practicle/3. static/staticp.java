
class account{

	public int AccountNo,balance;
	public static float intrst;
	public String name; 
	
	public void SetValue(String name1,int an,int b,float in){
		AccountNo=an;
		balance=b;
		intrst=in;
		name=name1;
		
	}
	public void GetValue(){
		System.out.println("\nname : "+name); 
		System.out.println("Account no. : "+AccountNo);
		System.out.println("Balance : "+balance);
		System.out.println("Interest. : "+intrst);
	}
}

class staticp{
	public static void main(String []args){
		account ac1 = new account();
		ac1.SetValue("viraj",1234,2000,2.3f);
		account ac2 = new account();
		ac2.SetValue("ishwar",124,200,2.1f);
		ac2.GetValue();
		ac1.GetValue();
	}	

}

