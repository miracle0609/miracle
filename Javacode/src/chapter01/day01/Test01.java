package chapter01.day01;
import java.util.Scanner;
public class Test01 {
	public static void ScoreJudge(int score) {
		int n = score / 10;
		switch (n) {
		case 10:
		case 9:
			System.out.println(score + ":优秀");
			break;
		case 8:
			System.out.println(score + ":良好");
			break;
		case 7:
			System.out.println(score + ":中等");
			break;
		case 6:
			System.out.println(score + ":及格");
			break;
		default:
			System.out.println(score + ":不及格");
		}
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("请输入成绩(小于等于100):");
		int score = sc.nextInt();
		if (score > 100 || score < 0) {
			System.out.println("输入有误，请重新输入：");
			score = sc.nextInt();
			ScoreJudge(score);
			sc.close();
			return;
		}
		ScoreJudge(score);
		sc.close();
	}
}
