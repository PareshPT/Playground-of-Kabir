class Shape {
	protected int x;
	protected int y;

	public Shape() {
		System.out.println("Shape()...");
	}

	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
		System.out.println("Shape(int, int)...");
	}

	public Shape(int x) {
		this(x, x);				//Call this class construtor with 2 parameters
		System.out.println("Shape(int, int)...");
	}

	public Shape(Shape other){
		this.x = other.x;
		this.y = other.y;
		System.out.println("Shape(Shape)...");
	}
	
	public void setXY(int x, int y) {
		this.x = x;
		this.y = y;
	}
	
	public void showXY() {
		System.out.println("x: " + x + ", " + "y: " + y);
	}
	
	public void setX(int x) {
		this.x = x;
	}

	public void setY(int y) {
		this.y = y;
	}

	public int getX() {
		return x;
	}

	public int getY() {
		return y;
	}

}

public class Ex3 {
	public static void main(String args[]) {
		System.out.println("Shape...");
		Shape s1 = new Shape(5);
		System.out.println();
		
	}
}

