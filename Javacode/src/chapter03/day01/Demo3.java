package chapter03.day01;
//���췽��

//������һ������ĳ�Ա������������������������ͬ
//����ʵ������ʱ���Զ�����
//�޷���ֵ��void 
//ϵͳĬ���ṩ�޲ι��췽��
//���������вι��췽��ʱ��ϵͳ���ṩ�޲ι��췽��

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
		Cat c1 = new Cat("����");
		c1.shout();
		Cat c2 = new Cat(10);
		c2.shout();
		
		Cat c3 = new Cat();
		c3.shout();
	}
}
