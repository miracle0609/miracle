package chapter03.day04;

public class Test {
public static void main(String[] args) {
	Student s1 = new Student();
	s1.setName("刘备");
	s1.setAge(20);
	Student s2 = new Student("关羽", 19);
	Student s3 = new Student("张飞", 18);
	StudentClass c = new StudentClass();
	c.setClassname("18级计算机");
	c.setNum(0);
	c.addStudent(s1);
	c.addStudent(s2);
	c.addStudent(s3);
	c.showAll();
}
}
