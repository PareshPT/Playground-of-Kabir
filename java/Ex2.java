class Shape {
	private int x;
	private int y;
	
	public void setValues(int a, int b) {
		x = a;
		y = b;
	}
	
	public void getValues() {
		System.out.println("x: " + x + ", " + "y: " + y);
	}	
}

public class Ex2 {
	public static void main(String args[]) {
		Shape shape1 = new Shape();			//Call Default Constructor...
		shape1.getValues();
	}
}

