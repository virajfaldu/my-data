public class Education{
	
	public String Degree;
	public int No_Year,Value;
	
	public void Set_Data(String degree,int no_year,int value){
		Degree = degree;
		No_Year = no_year;
		Value = value;
	}
	public void Show_Data(){
		System.out.println(" Degree : "+Degree);
		System.out.println(" Number Of Year : "+No_Year);
		System.out.println(" Value of Degree : "+Value);
	}
}
class Candidate extends Education{
	
	public String Name;
	public int Age;
	public char Gender;
	
	public void Set_data(String name,int age,char gender,String degree,int no_year,int value){
		Name = name;
		Age = age;
		Gender = gender;
		
		Set_Data(degree,no_year,value);
	}
	public void Show_data(){
		System.out.println("\n Candidate Name : "+Name);
		System.out.println(" Age : "+Age);
		System.out.println(" Gender : "+Gender);
		
		Show_Data();
	}
}
