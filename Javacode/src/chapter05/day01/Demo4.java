package chapter05.day01;

public class Demo4 {
	public static void main(String[] args) {
		String str="starter";
		String str1="hello";
//		�Ƿ���st��ͷ
		System.out.println(str.startsWith("st"));
//		�Ƿ���er��β
		System.out.println(str.endsWith("er"));
//		*�Ƿ����ar
		System.out.println(str.contains("ar"));
//		�Ƿ�Ϊ��
		System.out.println(str.isEmpty());
//		*�Ƿ����
		System.out.println(str.equals("stat"));
		System.out.println(str.equals(str1));		
	}
}
