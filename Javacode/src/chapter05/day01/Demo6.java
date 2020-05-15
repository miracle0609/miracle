package chapter05.day01;

public class Demo6 {
	public static void main(String[] args) {
		StringBuffer s=new StringBuffer();
//		添加字符串
		s.append("abc");//在尾部插入(追加)
		s.append("de");
		System.out.println(s);
//		在指定的位置插入
		s.insert(1, "hello");// 在1的位置上插入
		System.out.println(s);
//		修改字符
		s.setCharAt(1, 'H');
		System.out.println(s);
//		替换字符串
		s.replace(1, 6, "***");
		System.out.println(s);
//		指定位置删除
		s.deleteCharAt(1);
		System.out.println(s);
//	        清空缓冲区
		s.delete(0, s.length());
		System.out.println(s);
	}
}
