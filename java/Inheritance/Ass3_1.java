/*
 * 	1) Early Binding
 *  2) Bad Practice, never call Static methood from object.
 */
 
class A {
	public static void print() {
		System.out.println("Parent");
	}
}

class B extends A {
	//Override: method with same signature as super class method
	public static void print() {
		System.out.println("Child");
	}
}

public class Ass3_1 {
	public static void main(String args[]) {	
		A parent1 = new A();
		B child1 = new B();		
		A parent2 = new B();
		
		parent1.print();		//A.print()
		child1.print();			//B.print()
		parent2.print();		//A.print()
	}
}

