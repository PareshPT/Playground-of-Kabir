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
	public double getArea(){
		return getX() * getY();
	}
} 

class Circle extends Shape {
	public double getArea(){
		return 3.14 * getX() * getX();
	}
	
	public void setRadius(int r) {
		setX(r);
	}
} 



public class Ex1 {
	public static void main(String args[]) {
		Rectangle r1 = new Rectangle();
		r1.setXY(5, 7);
		System.out.println("Area of r1: " + r1.getArea());		

		Circle c1 = new Circle();
		c1.setRadius(10);
		System.out.println("Area of c1: " + c1.getArea());		
	}
}

