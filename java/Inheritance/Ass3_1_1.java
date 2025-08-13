/*
 * 	1) Late Binding
 *  2) Runtime polymorphism
 */
 
class A {
	int aVal;
	
	A() { 
	}
	
	A(int aVal) {
		this.aVal = aVal;
	}
	
	public void print() {
		System.out.println("Parent: " + aVal);
	}
}

class B extends A {
	int bVal;
	
	B() { 
	}
	
	B(int bVal) {
		this.bVal = bVal;
	}

	//Override
	public void print() {
		System.out.println("Child: " + bVal);
	}
}

public class Ass3_1_1 {
	public static void main(String args[]) {	
		A parent1 = new A(5);
		B child1 = new B(10);		
		A parent2 = new B(15);
		
		parent1.print();		//A.print()
		child1.print();			//B.print()
		parent2.print();		//A.print()
	}
}

