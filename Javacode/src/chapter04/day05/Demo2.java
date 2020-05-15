package chapter04.day05;

//throws Exception 从当前的方法中抛异常
//后续的调用者需要try{}catch(){}
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
