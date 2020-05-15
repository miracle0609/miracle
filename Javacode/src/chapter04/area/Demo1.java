package chapter04.area;

import java.util.*;

interface base {
	double area();

	double zhou();
}

class circle implements base {
	final double pi = Math.PI;
	private double r;

	@Override
	public double area() {
		// TODO Auto-generated method stub
		return pi * r * r;
	}

	@Override
	public double zhou() {
		// TODO Auto-generated method stub
		return 2 * pi * r;
	}

	public circle(double r) {
		super();
		this.r = r;
	}

}

class square implements base {
	private double a;

	@Override
	public double area() {
		// TODO Auto-generated method stub
		return a * a;
	}

	@Override
	public double zhou() {
		// TODO Auto-generated method stub
		return 4 * a;
	}

	public square(double a) {
		super();
		this.a = a;
	}
}

public class Demo1 {
	public static void main(String[] args) {
		double r, a;
		Scanner cin=new Scanner(System.in);
		System.out.println("������Բ�İ뾶��");
		r = cin.nextDouble();
		cin.nextLine();
		circle co1=new circle(r);
		System.out.println("Բ�������:" + co1.area());
		System.out.println("Բ���ܳ���:" + co1.zhou());
		
		System.out.println("�����������εı߳���");
		a = cin.nextDouble();
		cin.nextLine();
		square sq1=new square(a);
		System.out.println("�����ε������:" + sq1.area());
		System.out.println("�����ε��ܳ���:" + sq1.zhou());
		
	}
	
	public void show(base base1) {
		 if (base1 instanceof circle) {
			
		}
	}
}
