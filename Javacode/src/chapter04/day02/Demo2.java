package chapter04.day02;

interface Person {
//�ӿ��г���Ĭ��public static final
	String name = "����";

//�ӿڷ���Ĭ��public abstract
	void say();

	void show();
}

class Student implements Person {
	public void say() {
		System.out.println("�ҽ�" + name);
	}

	public void show() {
		System.out.println("��Һ�! ");
	}
}

public class Demo2 {
	public static void main(String[] args) {

	}
}
