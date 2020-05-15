package chapter05.day01;

public class Demo5 {
	public static void main(String[] args) {
		String str="2020/05/06";
		str=str+"ddd";
//		*截取
		System.out.println(str.substring(5));//从**开始截取
		System.out.println(str.substring(0, 4));
//		通过"-"分割字符串，并转成字符串数组
		String[] arr=str.split("/");//arr={"2020","05","06"}
		for(int i=0;i<arr.length;i++){
			System.out.println(arr[i]);
		}
//		增强for循环，一般用于遍历或者输出arr={"2020","05","06"}
		for(String s:arr){
			System.out.println(s);
		}		
	}
}
