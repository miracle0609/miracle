package chapter03.day01;

public class Person {
	private String name;
	// 将name属性私有化
	private int age;
	// 将age属性私有化
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
		// 下面是对传人的参数进行检查
		if (stuAge <= 0) {
			System.out.println("年龄不合....");
		} else {
			age = stuAge;// 对属性赋值
		}
	}

	public void introduce() {
		System.out.println ("大家好,我叫"+name+",我今年"+age+"岁!");
	}

	public static void main(String[] args) {
		Person stu = new Person();
		stu.setAge(-30);
		stu.setName("李芳");
		stu.introduce();
	}

}
