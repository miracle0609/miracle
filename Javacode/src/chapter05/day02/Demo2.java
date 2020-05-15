package chapter05.day02;
//数组copy
//System.arraycopy(src原数组，srcPos原数组起始位置，
//dest目标数组，destPos目标数组的起始位置，length拷贝的长度
public class Demo2 {
	public static void main(String[] args) {
		int[] arr1= {1,2,3,4,5};
		int[] arr2= {11,12,13,14,15,16};
		//arr1的内容从下标0开始拷贝到arr2数组中(从1到5)
		System.arraycopy(arr1, 0, arr2, 1, 5);
		for(int m:arr2) {
			System.out.println(m);
		}
	}
}
