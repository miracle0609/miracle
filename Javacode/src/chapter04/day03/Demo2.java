package chapter04.day03;

//abstract class Animal {
//	String name;
//
//	abstract void shout();
//}

interface Animal {
	public static final String name = "";

	public void shout();
}

class Dog implements Animal {

	@Override
	public void shout() {
		// TODO Auto-generated method stub
		System.out.println("��������");
	}

}

class Cat implements Animal {

	@Override
	public void shout() {
		// TODO Auto-generated method stub
		System.out.println("��������");
	}

	public void catchMouse() {
		System.out.println("ץ����");
	}
}

public class Demo2 {
	public static void main(String[] args) {
		Animal dog = new Dog();// ����ת��:����Ķ�������������ʹ��
		dog.shout();
		Animal cat = new Cat();
		cat.shout();
		Cat c = (Cat) cat;// ����ת��
		c.catchMouse();
		//Cat c1=(Cat)dog;
		//c1.catchMouse();  //����� 
		if(dog instanceof Cat) {
			Cat c1 = (Cat) dog;
			c1.catchMouse();
		} else {
			System.out.println("dog����Cat����");
		}
		AnimalShout(new Dog());
		AnimalShout(new Cat());
	}
	public static void AnimalShout(Animal an) {
		an.shout();
	}
	
}
