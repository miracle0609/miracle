package chapter04.day01;

public class Demo2 extends Person {

	public Demo2() {

	}

	public Demo2(String name) {
		super(name);
	}
	
	public void say() {
		System.out.println("1 " + super.getName());
		return;
	}
	
	
	public static void main(String[] args) {
		Demo2 a = new Demo2("Àî°×");
		a.say();
		System.exit(0);
	}
}
