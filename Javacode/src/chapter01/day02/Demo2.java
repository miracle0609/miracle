package chapter01.day02;
import java.util.Random;
import java.util.Scanner;
public class Demo2 {
	public static void main(String[] args) {
		Random random = new Random();
		int number = random.nextInt(10) + 1;
		System.out.println("������Ѿ����ɣ�������һ������ʼ��Ϸ:");
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		while (m != number) {
			if (m > number) {
				System.out.println("�´���");
			} else {
				System.out.println("��С��");
			}
			System.out.println("����������һ����,����\"0\"��Ϸ�˳�:");
			m = sc.nextInt();
			if (m == 0) {
				System.out.println("��Ϸ�˳�");
				sc.close();
				System.exit(0);
			}
		}
		System.out.println("�¶���,��Ϸ����");
		sc.close();
	}
}
