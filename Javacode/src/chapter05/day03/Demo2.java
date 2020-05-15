package chapter05.day03;

import java.text.DecimalFormat;

public class Demo2 {
	public static void main(String[] args) {
		System.out.println("绝对值：" + Math.abs(-1));
		System.out.println("正弦：" + Math.sin(Math.PI / 2));
		System.out.println("平方根:" + Math.sqrt(4));
		System.out.println("立方根: " + Math.cbrt(8));
		System.out.println("乘方: " + Math.pow(2, 3));
		System.out.println(Math.pow(2, 0.5));
		System.out.println("大于参数的最小整数" + Math.ceil(4.5));
		System.out.println("小于参数的最大整数" + Math.floor(-4.5));
		System.out.println("四舍五入：" + Math.round(4.56));
		System.out.println("随机数" + Math.random());
		double d = 13.5678;
		System.out.println(String.format("%.2f", d));
		DecimalFormat df = new DecimalFormat("#.000");
		System.out.println(Double.parseDouble(df.format(d)) + 1);
	}
}
