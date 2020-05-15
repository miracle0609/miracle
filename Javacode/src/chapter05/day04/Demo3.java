package chapter05.day04;

import java.text.DateFormat;
import java.text.ParseException;
import java.util.Date;

public class Demo3 {
	public static void main(String[] args) throws ParseException {
		Date d=new Date();
		//full
		DateFormat df1=DateFormat.getDateInstance(DateFormat.FULL);
		System.out.println(df1.format(d));
		//LONG
		DateFormat df2=DateFormat.getDateInstance(DateFormat.LONG);
		System.out.println(df2.format(d));
		//MEDIUM
		DateFormat df3=DateFormat.getDateInstance(DateFormat.MEDIUM);
		System.out.println(df3.format(d));
		//SHORT
		DateFormat df4=DateFormat.getDateInstance(DateFormat.SHORT);
		System.out.println(df4.format(d));
		
		DateFormat df5=DateFormat.getDateInstance();
		System.out.println(df5.format(d));
		
		String d1="2020Äê5ÔÂ11ÈÕ";
		System.out.println(df3.parse(d1));
	}
}
