package chapter03.day01;
//构造方法

//是类中一个特殊的成员方法，方法名必须与类名相同
//在类实例化的时候，自动调用
//无返回值，void 
//系统默认提供无参构造方法
//当你声明有参构造方法时，系统不提供无参构造方法

class Cat {
	private String name;
	private int age;

	public Cat(String name) {
		this.name = name;
	}
	
	public Cat(int age) {
		this.age = age;
	}

	public Cat(String name, int age) {
		this.name = name;
		this.age = age;
	}

	public Cat() {
		this.name = "kk";
		this.age = 5;
	}
	
	public void shout() {
		System.out.println("name:" + name + ",age:" + age);
	}
}
 
public class Demo3 {
	public static void main(String[] args) {
		Cat c1 = new Cat("喵喵");
		c1.shout();
		Cat c2 = new Cat(10);
		c2.shout();
		
		Cat c3 = new Cat();
		c3.shout();
	}
}
