package chapter05.day03;

import java.text.DecimalFormat;

public class Demo2 {
	public static void main(String[] args) {
		System.out.println("����ֵ��" + Math.abs(-1));
		System.out.println("���ң�" + Math.sin(Math.PI / 2));
		System.out.println("ƽ����:" + Math.sqrt(4));
		System.out.println("������: " + Math.cbrt(8));
		System.out.println("�˷�: " + Math.pow(2, 3));
		System.out.println(Math.pow(2, 0.5));
		System.out.println("���ڲ�������С����" + Math.ceil(4.5));
		System.out.println("С�ڲ������������" + Math.floor(-4.5));
		System.out.println("�������룺" + Math.round(4.56));
		System.out.println("�����" + Math.random());
		double d = 13.5678;
		System.out.println(String.format("%.2f", d));
		DecimalFormat df = new DecimalFormat("#.000");
		System.out.println(Double.parseDouble(df.format(d)) + 1);
	}
}
