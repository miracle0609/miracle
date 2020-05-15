package chapter05.day02;

import java.util.*;

public class Demo1 {
	public static void main(String[] args) {
		//获取当前时间与1970-1-1 0:00:00时间差，单位毫秒，时间戳。
		long start=System.currentTimeMillis();
		Properties p=System.getProperties();
		System.out.println(p);
		Set<String> nameSet=p.stringPropertyNames();
		for(String key:nameSet) {
			System.out.println(key+"->" + System.getProperty(key));
		}
		//获取当前时间与1970-1-1 0:00:00时间差，单位毫秒，时间戳。
		long end=System.currentTimeMillis();
		System.out.println("程序运行时间" + (end - start) + "毫秒");
	}
}
