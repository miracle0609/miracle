package chapter05.day03;

import java.io.IOException;

public class Demo1 {
	public static void main(String[] args) throws IOException {
		Runtime r = Runtime.getRuntime();
		System.out.println("����������:" + r.availableProcessors());
		System.out.println("jvm��ǰ�����ڴ�: " + r.freeMemory() / 1024 / 1024 + "M");
		System.out.println("jvm��ǰ�ڴ�������: " + r.totalMemory() / 1024 / 1024 + "M");
		System.out.println("java���Ի�ȡ������ڴ棺" + r.maxMemory() / 1024 / 1024 + "M");
		Process p=r.exec("notepad.exe");
		p=r.exec ("notepad.exe my.txt");
		p=r.exec ("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE  D:\\c++&c&java�ʼ�\\������ϰ\\C�������ȼ���.docx") ;
	}
}
