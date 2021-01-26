package student;
public class student{
	
	public int RollNo;
	public String Name;
	
	public void SetDetails(int Rn,String Nm){
		RollNo=Rn;
		Name=Nm;
	}
	
	public void GetDetails(){
		
		System.out.println("\nRoll No = "+RollNo);
		System.out.println("Name = "+Name);
	}
}
