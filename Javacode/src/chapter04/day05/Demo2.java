package chapter04.day05;

//throws Exception �ӵ�ǰ�ķ��������쳣
//�����ĵ�������Ҫtry{}catch(){}
public class Demo2 {
	public static void main(String[] args) {
		int m;
		try {
			m = div(10, 2);
			System.out.println(m);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}

	}

	public static int div(int x, int y) throws Exception {
		return x / y;
	}
	
	public static void show() throws Exception {
		System.out.println(div(10, 2));
	}
}
