package chapter04.day04;
//�����ڲ���
interface Animal {
	void shout();
}

//class Dog implements Animal {
//	public void shout() {
//		System.out.println("����...");
//	}
//}

public class Demo4 {
	public static void main(String[] args) {
		//AnimalShout(new Dog());
		AnimalShout(new Animal() {
			
			@Override
			public void shout() {
				// TODO Auto-generated method stub
				System.out.println("����...");
			}
		});
	}

	public static void AnimalShout(Animal an) {
		an.shout();
	}
}
