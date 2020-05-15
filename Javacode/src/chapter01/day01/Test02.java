package chapter01.day01;

public class Test02 {
	public static void main(String[] args) {
		int sum = 0;
		int n = 1;
		while (n <= 100) {
			sum += n;
			n++;
		}
		System.out.println("sum=" + sum);
		sum = 0;
		do {
			n--;
			sum += n;
		} while (n >= 1);
		System.out.println("sum=" + sum);
		sum = 0;
		for (int i = 1; i <= 100; i++) {
			sum += i;
		}
		System.out.println("sum=" + sum);
		
	}
}
