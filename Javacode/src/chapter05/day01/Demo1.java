package chapter05.day01;

public class Demo1 {
	public static void main(String[] args) {
//		1���ַ���������ʼ��String����
		String s1=null;
		String s2="";
		String s3="Hello";
//		2��String��Ĺ��췽��
		String s4=new String();
		String s5=new String("Hello");
		char[] arr=new char[]{'a','b','c'};
		String s6=new String(arr);
		System.out.println(s6);
	}
}
