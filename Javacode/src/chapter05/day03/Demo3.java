package chapter05.day03;

import java.util.Random;

public class Demo3 {
	public static void main(String[] args) {
		Random d = new Random();
		System.out.println(d.nextFloat());
		System.out.println(d.nextDouble());
		System.out.println(d.nextInt());
		System.out.println(d.nextInt(10));// [0,10)
		Random d1 = new Random(10);
		Random d2 = new Random(10);
		System.out.println(d1.nextInt());
		System.out.println(d2.nextInt());
		System.out.println(d1.nextInt());
		System.out.println(d2.nextInt());
	}
}
