package chapter05.day01;

public class Demo2 {
	public static void main(String[] args) {
		String s="Hello World";
		System.out.println("字符串长度"+s.length());
		System.out.println("字符串第1个位置的字符"+s.charAt(0));
		System.out.println("字符l第一次出现的位置"+s.indexOf('l'));
		System.out.println("字符ldl最后一次出现的位置"+s.lastIndexOf("ldl"));
	}
}
