package chapter04.day03;

/*接口：特殊的抽象方法，所有的方法都是抽象方法
 * (jdk8可以包含default方法和static方法)
 * 1、一个类可以实现多个接口
 * 2、继承接口时。必须实现接口所有的抽象类，抽象类可以实现部分抽象方法
 * 3、一个类可以先继承类，再实现接口（多个接口）
 * 4、接口可以继承接口（多继承）
 */
interface T{
	
}
interface Person {
//接口中常量默认public static final
	String name = "关羽";

//接口方法默认public abstract
	void say();

	void sleep();
}

interface Man extends Person, T {
	void eat();
}

class Chinese implements Man{
	@Override
	public void say() {
		// TODO Auto-generated method stub
		System.out.println("say");
	}

	@Override
	public void sleep() {
		// TODO Auto-generated method stub
		System.out.println("sleep");
	}

	@Override
	public void eat() {
		// TODO Auto-generated method stub
		System.out.println("eat");
	}
	
}
public class Demo1 {
	public static void main(String[] args) {
		Chinese m=new Chinese();
		m.eat();
	}
}

