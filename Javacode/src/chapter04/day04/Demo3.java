package chapter04.day04;
//静态内部累
class Outer2 {
	static int m = 0;

	public void show0ut() {
		System.out.println("外部类的方法");
	}

	static class Inner {
		public void showIn() {
			System.out.println(m);
		}
	}
}

public class Demo3 {
	public static void main(String[] args) {
		Outer2.Inner in = new Outer2.Inner();
		in.showIn();
	}
}
