package chapter03.day04;
//学生类：属性:(姓名，年龄) 行为：自我介绍

public class Student {
	private String name;
	private int age;
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public Student(String name, int age) {
		super();
		this.name = name;
		this.age = age;
	}
	public Student() {
		
	}
	public void show() {
		System.out.println("姓名:" + name + ",年龄：" + age);
	}
	
}
