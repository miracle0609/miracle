package chapter04.day04;
//��̬�ڲ���
class Outer2 {
	static int m = 0;

	public void show0ut() {
		System.out.println("�ⲿ��ķ���");
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
