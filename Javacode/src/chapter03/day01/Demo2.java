package chapter03.day01;

public class Demo2 {
	public static int add(int x, int y) {
		System.out.println("int方法");
		return x + y;
	}
	public static long add(long x, long y) {
		System.out.println("long方法");
		return x + y;
	}
	public static double add(double x, double y) {
		System.out.println("double方法");
		return x + y;
	}
	public static float add(float x, float y) {
		System.out.println("float方法");
		return x + y;
	}
	public static void main(String[] args) {
		System.out.println(add(1,2.0));
		System.out.println(add(1,2L));
		System.out.println(add(1.9,2.7f));
		System.out.println(add(1.5,2.7));
	}
}
