package chapter05.day01;

public class Demo6 {
	public static void main(String[] args) {
		StringBuffer s=new StringBuffer();
//		����ַ���
		s.append("abc");//��β������(׷��)
		s.append("de");
		System.out.println(s);
//		��ָ����λ�ò���
		s.insert(1, "hello");// ��1��λ���ϲ���
		System.out.println(s);
//		�޸��ַ�
		s.setCharAt(1, 'H');
		System.out.println(s);
//		�滻�ַ���
		s.replace(1, 6, "***");
		System.out.println(s);
//		ָ��λ��ɾ��
		s.deleteCharAt(1);
		System.out.println(s);
//	        ��ջ�����
		s.delete(0, s.length());
		System.out.println(s);
	}
}
