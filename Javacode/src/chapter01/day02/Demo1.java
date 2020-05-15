package chapter01.day02;

public class Demo1 {
	public static void main(String[] args) {
		int[] arr1 = new int[100];
		int[] arr2;
		arr2 = new int[100];
		int[] arr3 = new int[] { 1, 2 };
		int[] arr4 = { 1, 2, 3, 4 };
		String[] arrstr = new String[10];
		arr1[0] = 1;
		arr1[99] = 99;
		System.out.println(arr1[0] + arr1[99]);
		System.out.println("" + arr1[0] + arr1[99]);
		System.out.println("arr1[0]+arr1[99]=" + (arr1[0] + arr1[99]));
	}
}
