class Shape {
	private int x;
	private int y;

	public Shape() {
	}

	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void setValues(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void getValues() {
		System.out.println("x: " + x + ", " + "y: " + y);
	}	
}

public class Ex4 {
	public static void main(String args[]) {
		Shape shape1 = new Shape();
		shape1.getValues();

	}
}

