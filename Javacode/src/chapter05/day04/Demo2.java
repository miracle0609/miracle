package chapter05.day04;

import java.util.Calendar;
//Calendar类
public class Demo2 {
	public static void main(String[] args) {
		Calendar c=Calendar.getInstance();
		//年
		System.out.println(c.get(Calendar.YEAR));
		//月（从0开始）
		System.out.println(c.get(Calendar.MONTH) + 1);
		System.out.println(c.get(Calendar.DATE));
		System.out.println(c.get(Calendar.HOUR));
		System.out.println(c.get(Calendar.MINUTE));
		System.out.println(c.get(Calendar.SECOND));
		c.set(2020,4,27);
		c.add(Calendar.DATE, 10);
		System.out.println(c.get(Calendar.YEAR) + "-" + c.get(Calendar.MONTH) +  "-" + c.get(Calendar.DATE));
	}
}
