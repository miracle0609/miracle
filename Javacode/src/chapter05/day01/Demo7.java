package chapter05.day01;

public class Demo7 {
	public static void main(String[] args) {
		String str="123";
		System.out.println("str=123:"+str.hashCode());
		str=str+"456";
		System.out.println("str=123456:"+str.hashCode());
	}
}
