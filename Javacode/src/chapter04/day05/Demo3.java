package chapter04.day05;

public class Demo3 {
	public static void main(String[] args) {
		try {
			showAge(-10);
		} catch (Exception e) {
			// TODO Auto-generated catch block
			//
			e.printStackTrace();
			System.out.println(e.getMessage());
		}
	}

	public static void showAge(int age) throws Exception {
		if (age < 0) {
			throw new Exception("���䲻��С��0! ");
		} else {
			System.out.println(age);
		}
	}

}
