package chapter05.day03;
//��װ��
/*Java��һ���������ı�����ԣ��������Ͳ������ж��������
	Ϊ���û�������Ҳ���ж�����������ͳ����˰�װ����
	��������ʹ�ü�������Collectionʱ��һ��Ҫʹ�ð�װ���Ͷ��ǻ�������
	���൱�ڽ��������͡���װ��������ʹ���������˶��������
	����Ϊ����������Ժͷ������ḻ�˻������͵Ĳ�����
	���⣬����Ҫ��ArrayList��HashMap�зŶ���ʱ����int��double���ֻ��������ǷŲ���ȥ��
	��Ϊ��������װobject�ģ���ʱ����Ҫ��Щ�������͵İ�װ�����ˡ�*/
public class Demo4 {
	@SuppressWarnings("deprecation")
	public static void main(String[] args) {
		int m = 20;
		Integer n = new Integer(10);
		n = m;//�Զ�װ��:��������������int��ֵ����װ��Integer
		int c = n;//�Զ�����: ����װ��Integer��ֵ��������������int
		System.out.println(c + n);
	}
}
