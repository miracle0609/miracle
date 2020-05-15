package chapter03.day01;

class Student {
	private String id;
	private int grade;
	public String getId() {
		return id;
	}
	public void setId(String stuId) {
		id = stuId;
	}
	public int getGrade() {
		return grade;
	}
	public void setGrade(int stuGrade) {
		// 下面是对传学生的参数进行检查
		if (stuGrade < 0) {
			System.out.println("成绩不符合....");
		} else {
			grade = stuGrade;
		}
	}
	public Student() {
		System.out.println("无参构造方法：");
		this.id = "20200315";
		this.grade = 90;
	}
	public Student(String id, int grade) {
		System.out.println("有参构造方法：");
		this.id = id;
		this.grade = grade;
	}
	public void shout() {
		System.out.println("学生学号: " + id + ", 成绩: " + grade);
	}
}
public class Demo4 {
	public static void main(String[] args) {
		Student stu1 = new Student();
		stu1.setId("20200301");
		System.out.println("学生学号：" + stu1.getId());
		stu1.setGrade(97);
		System.out.println("成绩：" + stu1.getGrade());
		Student stu2 = new Student();
		stu2.shout();
		Student stu3 = new Student("20200330",85);
		stu3.shout();
	}
}