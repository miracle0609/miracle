package chapter04.day04;
//�ֲ��ڲ���
class Outer1 {
	int m = 1;

	public void showOut() {
		System.out.println("�ⲿ��ķ���");
		class Inner {
			int n = 0;

			public void showIn() {
				System.out.println("�ֲ��ڲ���ķ���" + m);
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
