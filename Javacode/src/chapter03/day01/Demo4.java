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
		// �����ǶԴ�ѧ���Ĳ������м��
		if (stuGrade < 0) {
			System.out.println("�ɼ�������....");
		} else {
			grade = stuGrade;
		}
	}
	public Student() {
		System.out.println("�޲ι��췽����");
		this.id = "20200315";
		this.grade = 90;
	}
	public Student(String id, int grade) {
		System.out.println("�вι��췽����");
		this.id = id;
		this.grade = grade;
	}
	public void shout() {
		System.out.println("ѧ��ѧ��: " + id + ", �ɼ�: " + grade);
	}
}
public class Demo4 {
	public static void main(String[] args) {
		Student stu1 = new Student();
		stu1.setId("20200301");
		System.out.println("ѧ��ѧ�ţ�" + stu1.getId());
		stu1.setGrade(97);
		System.out.println("�ɼ���" + stu1.getGrade());
		Student stu2 = new Student();
		stu2.shout();
		Student stu3 = new Student("20200330",85);
		stu3.shout();
	}
}