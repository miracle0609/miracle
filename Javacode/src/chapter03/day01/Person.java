package chapter03.day01;

public class Person {
	private String name;
	// ��name����˽�л�
	private int age;
	// ��age����˽�л�
	public String getName() {
		return name;
	}

	public void setName(String stuName) {
		name = stuName;
	}

	public int getAge() {
		return age;
	}

	public void setAge(int stuAge) {
		// �����ǶԴ��˵Ĳ������м��
		if (stuAge <= 0) {
			System.out.println("���䲻��....");
		} else {
			age = stuAge;// �����Ը�ֵ
		}
	}

	public void introduce() {
		System.out.println ("��Һ�,�ҽ�"+name+",�ҽ���"+age+"��!");
	}

	public static void main(String[] args) {
		Person stu = new Person();
		stu.setAge(-30);
		stu.setName("�");
		stu.introduce();
	}

}
