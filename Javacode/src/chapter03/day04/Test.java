package chapter03.day04;

public class Test {
public static void main(String[] args) {
	Student s1 = new Student();
	s1.setName("����");
	s1.setAge(20);
	Student s2 = new Student("����", 19);
	Student s3 = new Student("�ŷ�", 18);
	StudentClass c = new StudentClass();
	c.setClassname("18�������");
	c.setNum(0);
	c.addStudent(s1);
	c.addStudent(s2);
	c.addStudent(s3);
	c.showAll();
}
}
