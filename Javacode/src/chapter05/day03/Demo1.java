package chapter05.day03;

import java.io.IOException;

public class Demo1 {
	public static void main(String[] args) throws IOException {
		Runtime r = Runtime.getRuntime();
		System.out.println("处理器个数:" + r.availableProcessors());
		System.out.println("jvm当前空闲内存: " + r.freeMemory() / 1024 / 1024 + "M");
		System.out.println("jvm当前内存总容量: " + r.totalMemory() / 1024 / 1024 + "M");
		System.out.println("java可以获取的最大内存：" + r.maxMemory() / 1024 / 1024 + "M");
		Process p=r.exec("notepad.exe");
		p=r.exec ("notepad.exe my.txt");
		p=r.exec ("C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE  D:\\c++&c&java笔记\\寒假练习\\C语言优先级表.docx") ;
	}
}
