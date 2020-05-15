package chapter05.day01;

public class Demo3 {
	public static void main(String[] args) {
//		字符串转字符数组
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
//		字符串转大写
		System.out.println(s.toUpperCase());
//		去前后空格
		String s1=" http://www.***.com  ";
		System.out.println(s1);
		System.out.println(s1.trim());
//		字符串替换
		System.out.println(s1.replace("***", "baidu"));
	}
}
