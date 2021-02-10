import java.util.*;
abstract class person{

	public String name;
	public int age;
	public long mob_no;

}

class student extends person{
	
	public int rollno, marks;
	
	public void setdata(String name,int age,long mob_no,int rollno,int marks){
		super.name=name;
		super.age=age;
		super.mob_no=mob_no;
		this.rollno=rollno;
		this.marks=marks;
	}

	public void ShowData(){
		
		System.out.println("\n Name : "+name);
		System.out.println(" Age : "+age);
		System.out.println(" mob_no : "+name);
		System.out.println(" rollno : "+name);
		System.out.println(" marks : "+name);		
	}	
}

public class AbstractExample{

	public static void main(String[] args){
		
		Scanner scan = new Scanner(System.in);
		String name;
		int age,rollno,marks;
	        long mob_no;

		System.out.print("\n Enter Student Name : ");
		name=scan.nextLine();
		
		System.out.print("\n Enter Student Age : ");
		age=scan.nextInt();
		
		System.out.print("\n Enter Student Mobile No : ");
		mob_no=scan.nextLong();

		System.out.print("\n Enter Student RollNo : ");
		rollno=scan.nextInt();
		
		System.out.print("\n Enter Student Marks : ");
		marks=scan.nextInt();

		student s1 = new student();

		s1.setdata(name,age,mob_no,rollno,marks);
		s1.ShowData();
				
	}
	
}