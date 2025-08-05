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

public class Ex1 {
	public static void main(String args[]) {
		Shape shape1 = new Shape();
		shape1.setValues(5, 7);
		shape1.getValues();
	}
}

