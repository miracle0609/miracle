package chapter01.day02;

import java.util.Scanner;
import java.util.Random;

public class Demo3 {
	//���ѧ��
	public static void addStudent(String [] m) {
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            m[i] = sc.next();
        }
        sc.close();
    }
   //��ʾѧ������
    public static void displayStudent (String [] m) {
        for (int i = 0; i < m.length; i++) {
            System.out.println("ѧ��" + (i + 1) + "������"+ m[i]);
        }
    }
    //�������
    public static void randomStudent (String [] m) {
        //�ڰ༶��������Χ�ڣ��������һ�������
    	Random random = new Random();
        int index = random.nextInt(m.length);
        System.out.println("�����������ѧ��������"+ m[index]);
    }
    public static void main(String[] args) {
        String [] m = new String[3];
        addStudent(m);
        displayStudent(m);
        randomStudent(m);
    }
}