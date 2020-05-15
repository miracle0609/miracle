package chapter03.day04;
//班级类：属性：（班级名称，人数）行为：添加学生
public class StudentClass {
	private String classname;
	private int num;
	private Student member[]= new Student[50];
	public String getClassname() {
		return classname;
	}
	public void setClassname(String classname) {
		this.classname = classname;
	}
	public int getNum() {
		return num;
	}
	public void setNum(int num) {
		this.num = num;
	}
	public Student[] getMember() {
		return member;
	}
	public void setMember(Student[] member) {
		this.member = member;
	}
	public void addStudent(Student student) {
		if (num < 50) {
			member[num] = student;
			num++;
		}else {
			System.out.println("班级人数已满");
		}
	}
	public void showAll() {
		System.out.println("班级名：" + classname + "人数：" + num);
		System.out.println("学生名单：");
		for (int i = 0; i < num; i++) {
			member[i].show();
		}
	}
}
