package chapter04.day02;

abstract class Animall {
	String name;

	public abstract void shout();

	public abstract void eat();

	public void sleep() {
		System.out.println("sleep");
	}
}
class Dog1 extends Animall {
		public void shout() {
			System.out.println("ÍôÍô...");
		}
		@Override
		public void eat() {
// TODO Auto- generated method stub
		}
	}

public class Demo1 {
	public static void main(String[] args) {
		Dog1 d = new Dog1();
		d.shout();
	}
}
