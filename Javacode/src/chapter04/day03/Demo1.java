package chapter04.day03;

/*�ӿڣ�����ĳ��󷽷������еķ������ǳ��󷽷�
 * (jdk8���԰���default������static����)
 * 1��һ�������ʵ�ֶ���ӿ�
 * 2���̳нӿ�ʱ������ʵ�ֽӿ����еĳ����࣬���������ʵ�ֲ��ֳ��󷽷�
 * 3��һ��������ȼ̳��࣬��ʵ�ֽӿڣ�����ӿڣ�
 * 4���ӿڿ��Լ̳нӿڣ���̳У�
 */
interface T{
	
}
interface Person {
//�ӿ��г���Ĭ��public static final
	String name = "����";

//�ӿڷ���Ĭ��public abstract
	void say();

	void sleep();
}

interface Man extends Person, T {
	void eat();
}

class Chinese implements Man{
	@Override
	public void say() {
		// TODO Auto-generated method stub
		System.out.println("say");
	}

	@Override
	public void sleep() {
		// TODO Auto-generated method stub
		System.out.println("sleep");
	}

	@Override
	public void eat() {
		// TODO Auto-generated method stub
		System.out.println("eat");
	}
	
}
public class Demo1 {
	public static void main(String[] args) {
		Chinese m=new Chinese();
		m.eat();
	}
}

