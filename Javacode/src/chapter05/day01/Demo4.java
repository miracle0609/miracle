package chapter05.day01;

public class Demo4 {
	public static void main(String[] args) {
		String str="starter";
		String str1="hello";
//		是否以st开头
		System.out.println(str.startsWith("st"));
//		是否以er结尾
		System.out.println(str.endsWith("er"));
//		*是否包含ar
		System.out.println(str.contains("ar"));
//		是否为空
		System.out.println(str.isEmpty());
//		*是否相等
		System.out.println(str.equals("stat"));
		System.out.println(str.equals(str1));		
	}
}
