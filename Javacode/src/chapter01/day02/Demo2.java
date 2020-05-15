package chapter01.day02;
import java.util.Random;
import java.util.Scanner;
public class Demo2 {
	public static void main(String[] args) {
		Random random = new Random();
		int number = random.nextInt(10) + 1;
		System.out.println("随机数已经生成，请输入一个数开始游戏:");
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		while (m != number) {
			if (m > number) {
				System.out.println("猜大了");
			} else {
				System.out.println("猜小了");
			}
			System.out.println("请重新输入一个数,输入\"0\"游戏退出:");
			m = sc.nextInt();
			if (m == 0) {
				System.out.println("游戏退出");
				sc.close();
				System.exit(0);
			}
		}
		System.out.println("猜对了,游戏结束");
		sc.close();
	}
}
