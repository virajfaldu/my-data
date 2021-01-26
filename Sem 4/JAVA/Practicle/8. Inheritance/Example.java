public class Example{

	public static void main(String[] args){
		
		Candidate c1 = new Candidate();
		c1.Set_data(args[0],Integer.parseInt(args[1]),args[1].charAt(0),args[3],Integer.parseInt(args[4]),Integer.parseInt(args[5]));
		c1.Show_data();
	}
}
