package chapter04.day05;

/*try{���ܳ����쳣�Ĵ���}
* catch(Exception e){�쳣����(����쳣��Ϣ) }
* finally{�����Ƿ����쳣����ִ�еĴ���}
*/

public class Demo1 {
	public static void main(String[] args) {
		try {
			int m = 10 / 0;
			System.out.println(m);
			System.out.println("ok");
		} catch (Exception e) {
			System.out.println(e.getMessage());
		} finally {
			System.out.println("over");
		}
		System.out.println("����ִ��...");
	}
}
