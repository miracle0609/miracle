package chapter05.day02;

import java.util.*;

public class Demo1 {
	public static void main(String[] args) {
		//��ȡ��ǰʱ����1970-1-1 0:00:00ʱ����λ���룬ʱ�����
		long start=System.currentTimeMillis();
		Properties p=System.getProperties();
		System.out.println(p);
		Set<String> nameSet=p.stringPropertyNames();
		for(String key:nameSet) {
			System.out.println(key+"->" + System.getProperty(key));
		}
		//��ȡ��ǰʱ����1970-1-1 0:00:00ʱ����λ���룬ʱ�����
		long end=System.currentTimeMillis();
		System.out.println("��������ʱ��" + (end - start) + "����");
	}
}
