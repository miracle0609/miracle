package chapter04.day01;

class Animal{
	String name;
	public void shout() {
		System.out.println("Animal��shout����������" + name);
	}
}

class Dog extends Animal{
	String name = "��ë";
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public void show() {
		System.out.println("����show����" + name);
	}
	public void shout() {
		System.out.println("����..." + name);
	}
}
public class Demo1 {
	public static void main(String[] args) {
		Dog dog = new Dog();
		dog.name="��ë";
		dog.show();
		dog.shout() ;//���������shout�������ͽ�ԭ��
	}

}
