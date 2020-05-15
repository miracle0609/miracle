package chapter03.day03;

class Cat{
	static {
		System.out.println("执行Cat类静态代码块");
	}
	public Cat() {
		System.out.println("执行Cat类的构造方法");
	}
}
public class Demo4 {
	static {
		System.out.println("执行Demo4静态方法");
	}
	public static void main(String[] args) {
		System.out.println("执行Demo4的main方法");
		Cat c1 = new Cat();
		Cat c2 = new Cat();
	}
}
