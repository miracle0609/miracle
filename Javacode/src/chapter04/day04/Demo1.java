package chapter04.day04;
//��Ա�ڲ���
class Outer {
	int m = 1;

	public void showOuter() {
		System.out.println("�ⲿ��ķ���");
	}

	class Inner {
		int n = 0;

		public void showIn() {
			System.out.println("��Ա�ڲ���ķ���" + m);
			showOuter();
		}

		public void show() {
			Inner in = new Inner();
			in.showIn();
			System.out.println(in.n);
		}
	}
}

public class Demo1 {
	public static void main(String[] args) {
		Outer out = new Outer();
		Outer.Inner in = out.new Inner();
		Outer.Inner in1 = new Outer().new Inner();
		in.showIn();
	}
}
