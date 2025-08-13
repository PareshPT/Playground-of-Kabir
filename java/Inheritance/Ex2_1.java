//Copy Construtor 
class Shape {
	private int x;
	private int y;

/*
	public Shape() {
		System.out.println("Shape()...");
	}
*/

	public Shape(int x, int y) {
		this.x = x;
		this.y = y;
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

class Rectangle extends Shape {
	public Rectangle() {
		System.out.println("Rectangle()...");		
	}
	
	public double getArea(){
		return getX() * getY();
	}
} 

class Circle extends Shape {
	public Circle() {
		System.out.println("Circle()...");		
	}
	
	public Circle(int r) {
		setX(r);
		System.out.println("Circle(int)...");		
	}

	public double getArea(){
		return 3.14 * getX() * getX();
	}
	
	public void setRadius(int r) {
		setX(r);
	}
} 



public class Ex2_1 {
	public static void main(String args[]) {
		System.out.println("Rectangle...");
		Rectangle r1 = new Rectangle();
		System.out.println();
		
		System.out.println("Circle...");
		Circle c1 = new Circle();
		System.out.println();

		System.out.println("Circle...");
		Circle c2 = new Circle(5);
		System.out.println();
	}
}

