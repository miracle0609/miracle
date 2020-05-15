package chapter05.day04;

import java.util.Date;

public class Demo1 {
	public static void main(String[] args) {
		Date d1=new Date();
		System.out.println(d1);
		Date d2=new Date(System.currentTimeMillis() + 1000);
		System.out.println(d2);
	}
}
