
class Student{
	private int rollno,marks;
	
	public void SetValue(int r,int m){
		rollno = r;
		marks=m;
	}
	public void ShowValue(){
		System.out.println("\n Roll No. = "+rollno);
		System.out.println("\n Marks = "+marks);		
	}
}
public	class Example{
	public static void main(String[] args){
		Student s1= new Student();
		s1.SetValue(1,89);
		s1.ShowValue();
	}
}

