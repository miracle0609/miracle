package chapter04.day04;
//局部内部类
class Outer1 {
	int m = 1;

	public void showOut() {
		System.out.println("外部类的方法");
		class Inner {
			int n = 0;

			public void showIn() {
				System.out.println("局部内部类的方法" + m);
			}
		}
		Inner in = new Inner();
		in.showIn();

	}
}

public class Demo2 {
	public static void main(String[] args) {
		Outer1 out = new Outer1();
		out.showOut();
	}
}
