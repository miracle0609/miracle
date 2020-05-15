package chapter04.day05;

/*try{可能出现异常的代码}
* catch(Exception e){异常处理(输出异常信息) }
* finally{无论是否发生异常都会执行的代码}
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
		System.out.println("继续执行...");
	}
}
