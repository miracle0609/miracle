package chapter01.day01;
import java.util.Scanner;
public class Test01 {
	public static void ScoreJudge(int score) {
		int n = score / 10;
		switch (n) {
		case 10:
		case 9:
			System.out.println(score + ":����");
			break;
		case 8:
			System.out.println(score + ":����");
			break;
		case 7:
			System.out.println(score + ":�е�");
			break;
		case 6:
			System.out.println(score + ":����");
			break;
		default:
			System.out.println(score + ":������");
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("������ɼ�(С�ڵ���100):");
		int score = sc.nextInt();
		if (score > 100 || score < 0) {
			System.out.println("�����������������룺");
			score = sc.nextInt();
			ScoreJudge(score);
			sc.close();
			return;
		}
		ScoreJudge(score);
		sc.close();
	}
}
