package chapter04.day01;

class Animal{
	String name;
	public void shout() {
		System.out.println("Animal的shout方法：动物" + name);
	}
}

class Dog extends Animal{
	String name = "金毛";
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void show() {
		System.out.println("子类show方法" + name);
	}
	public void shout() {
		System.out.println("汪汪..." + name);
	}
}
public class Demo1 {
	public static void main(String[] args) {
		Dog dog = new Dog();
		dog.name="金毛";
		dog.show();
		dog.shout() ;//调用子类的shout方法，就近原则
	}

}
