package chapter03.day04;
//�༶�ࣺ���ԣ����༶���ƣ���������Ϊ�����ѧ��
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
			System.out.println("�༶��������");
		}
	}
	public void showAll() {
		System.out.println("�༶����" + classname + "������" + num);
		System.out.println("ѧ��������");
		for (int i = 0; i < num; i++) {
			member[i].show();
		}
	}
}
