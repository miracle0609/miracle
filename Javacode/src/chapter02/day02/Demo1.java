package chapter02.day02;

public class Demo1 {
	public static void main(String[] args) {
		int m = 45, n = 90;
		if (m % 2 == 0) {
			System.out.println(m + "是偶数");
		} else {
			System.out.println(m + "是奇数");
		}
		System.out.println(n + ((n & 1) == 0 ? "是偶数" : "是奇数"));
	}
}
