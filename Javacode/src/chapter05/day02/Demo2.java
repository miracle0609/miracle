package chapter05.day02;
//����copy
//System.arraycopy(srcԭ���飬srcPosԭ������ʼλ�ã�
//destĿ�����飬destPosĿ���������ʼλ�ã�length�����ĳ���
public class Demo2 {
	public static void main(String[] args) {
		int[] arr1= {1,2,3,4,5};
		int[] arr2= {11,12,13,14,15,16};
		//arr1�����ݴ��±�0��ʼ������arr2������(��1��5)
		System.arraycopy(arr1, 0, arr2, 1, 5);
		for(int m:arr2) {
			System.out.println(m);
		}
	}
}
