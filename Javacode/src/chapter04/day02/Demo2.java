package chapter04.day02;

interface Person {
//接口中常量默认public static final
	String name = "关羽";

//接口方法默认public abstract
	void say();

	void show();
}

class Student implements Person {
	public void say() {
		System.out.println("我叫" + name);
	}

	public void show() {
		System.out.println("大家好! ");
	}
}

public class Demo2 {
	public static void main(String[] args) {

	}
}
