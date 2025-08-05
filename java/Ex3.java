class Shape {
	private int x;
	private int y;
	
	public Shape() {
		x = 0; 
		y = 0;
	}

	public Shape(int a, int b) {
		x = a;
		y = b;
	}
	
	public void setValues(int a, int b) {
		x = a;
		y = b;
	}
	
	public void getValues() {
		System.out.println("x: " + x + ", " + "y: " + y);
	}	
}

public class Ex3 {
	public static void main(String args[]) {
		Shape shape1 = new Shape();
		shape1.getValues();

		Shape shape2 = new Shape(4, 5);
		shape2.getValues();
	}
}

