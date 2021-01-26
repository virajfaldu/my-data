/*Write a java program to scan 3 integer values from the command line argument
and display the maximum number using conditional operator.*/

public class Max{

	public static void main(String[] args){
	
		int a,b,c;
		
		a = Integer.parseInt(args[0]);
		b = Integer.parseInt(args[1]);
		c = Integer.parseInt(args[2]);
		
		if(a>b){
		
			if(a>c){
				System.out.println(a+" Is Biggest Number");
			}
			else{
				System.out.println(c+" Is Biggest Number");
			}
		}
		else{
		
			if(b>c){
				System.out.println(b+" Is Biggest Number");
			}
			else{
				System.out.println(c+" Is Biggest Number");
			}
		}	
	}

}
