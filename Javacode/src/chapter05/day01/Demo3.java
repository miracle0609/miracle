package chapter05.day01;

public class Demo3 {
	public static void main(String[] args) {
//		�ַ���ת�ַ�����
		String s="java";
		char[] arr=s.toCharArray();//j,a,v,a
		for(int i=0;i<arr.length;i++){
			if(i!=arr.length-1){
				System.out.print(arr[i]+",");
			}
			else{
				System.out.println(arr[i]);
			}
		}
//		�ַ���ת��д
		System.out.println(s.toUpperCase());
//		ȥǰ��ո�
		String s1=" http://www.***.com  ";
		System.out.println(s1);
		System.out.println(s1.trim());
//		�ַ����滻
		System.out.println(s1.replace("***", "baidu"));
	}
}
