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
		System.out.println("汪汪。。");
	}

}

class Cat implements Animal {

	@Override
	public void shout() {
		// TODO Auto-generated method stub
		System.out.println("喵喵。。");
	}

	public void catchMouse() {
		System.out.println("抓老鼠");
	}
}

public class Demo2 {
	public static void main(String[] args) {
		Animal dog = new Dog();// 向上转型:子类的对象当做父类类型使用
		dog.shout();
		Animal cat = new Cat();
		cat.shout();
		Cat c = (Cat) cat;// 向下转型
		c.catchMouse();
		//Cat c1=(Cat)dog;
		//c1.catchMouse();  //错误的 
		if(dog instanceof Cat) {
			Cat c1 = (Cat) dog;
			c1.catchMouse();
		} else {
			System.out.println("dog不是Cat类型");
		}
		AnimalShout(new Dog());
		AnimalShout(new Cat());
	}
	public static void AnimalShout(Animal an) {
		an.shout();
	}
	
}
