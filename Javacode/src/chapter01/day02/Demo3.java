package chapter01.day02;

import java.util.Scanner;
import java.util.Random;

public class Demo3 {
	//添加学生
	public static void addStudent(String [] m) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            m[i] = sc.next();
        }
        sc.close();
    }
   //显示学生姓名
    public static void displayStudent (String [] m) {
        for (int i = 0; i < m.length; i++) {
            System.out.println("学生" + (i + 1) + "姓名："+ m[i]);
        }
    }
    //随机点名
    public static void randomStudent (String [] m) {
        //在班级总人数范围内，随机产生一个随机数
    	Random random = new Random();
        int index = random.nextInt(m.length);
        System.out.println("被随机点名的学生姓名："+ m[index]);
    }
    public static void main(String[] args) {
        String [] m = new String[3];
        addStudent(m);
        displayStudent(m);
        randomStudent(m);
    }
}