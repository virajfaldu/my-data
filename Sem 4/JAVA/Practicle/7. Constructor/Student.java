public class Student{
	
	public String Name;
	public int RollNo,GR_No,Attendence;
	
	public Student(String name,int rollno,int gr_no,int attendence){
		Name = name;
		RollNo = rollno;
		GR_No = gr_no;
		Attendence = attendence;
	}
	public void Show_Data(){
		System.out.println("\n Name = "+Name);
		System.out.println(" Roll No = "+RollNo);
		System.out.println(" GR_No = "+GR_No);
		System.out.println(" Attendence = "+Attendence);
	}
	
	public static void main(String[] args){
		Student s1 = new Student("viraj",28,2389,168);
		s1.Show_Data();
	}
}

