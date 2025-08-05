//Copy Construtor 
class Shape {
	private int x;
	private int y;

	public Shape() {
	}

	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public Shape(Shape other){
		this.x = other.x;
		this.y = other.y;
	}
	
	public void setValues(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void getValues() {
		System.out.println("x: " + x + ", " + "y: " + y);
	}	
}

public class Ex5 {
	public static void main(String args[]) {
		Shape shape1 = new Shape(5, 7);
		shape1.getValues();
		
		Shape shape2 = new Shape(shape1);
		shape2.getValues();
	}
}

