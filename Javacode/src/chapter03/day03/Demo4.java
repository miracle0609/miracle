package chapter03.day03;

class Cat{
	static {
		System.out.println("ִ��Cat�ྲ̬�����");
	}
	public Cat() {
		System.out.println("ִ��Cat��Ĺ��췽��");
	}
}
public class Demo4 {
	static {
		System.out.println("ִ��Demo4��̬����");
	}
	public static void main(String[] args) {
		System.out.println("ִ��Demo4��main����");
		Cat c1 = new Cat();
		Cat c2 = new Cat();
	}
}
