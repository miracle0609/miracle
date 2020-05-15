package chapter04.day05;

class Person {
	protected void finalize() throws Throwable {
		// TODO Auto- generated method stub
		super.finalize();
		System.out.println("该对象被作为垃圾回收");
	}
}

public class Demo4 {
	public static void main(String[] args) {
		recycle1();
		System.out.println("-------------");
		recycle2();
	}

	public static void recycle1() {
		Person p1 = new Person();
		p1 = null;
		int i = 1;
		while (i < 20) {
			i++;
			System.out.println("方法1循环中...");
		}
	}

	public static void recycle2(){
		Person p2=new Person( );
		p2=null;
		System.gc();//垃圾回收器强制回收垃圾
		int i=1;
		while(i<40){
			System.out.println("方法1循环中...");
			i++;
		}
	}
}