package chapter05.day01;

public class Demo5 {
	public static void main(String[] args) {
		String str="2020/05/06";
		str=str+"ddd";
//		*��ȡ
		System.out.println(str.substring(5));//��**��ʼ��ȡ
		System.out.println(str.substring(0, 4));
//		ͨ��"-"�ָ��ַ�������ת���ַ�������
		String[] arr=str.split("/");//arr={"2020","05","06"}
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]);
		}
//		��ǿforѭ����һ�����ڱ����������arr={"2020","05","06"}
		for(String s:arr){
			System.out.println(s);
		}		
	}
}
