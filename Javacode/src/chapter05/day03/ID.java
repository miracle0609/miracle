package chapter05.day03;


import java.util.Calendar;

/*18λ���֤����:��7��8��9��10λΪ�������(��λ��)����11����12λΪ�����·ݣ���13��14
 *λ����������ڣ���17λ�����Ա�����Ϊ�У�ż��ΪŮ��
 * */
class People{
	private String id;
	public String getId() {
		return id;
	}
	public void setId(String id) {
		this.id = id;
	}
	public People() {
		
	}
	public boolean verification() throws Exception{
		if(id.length() < 18) {
			throw new Exception("���֤��ʽ����");
		}
		if(id.length() == 18 && (id.endsWith("X") || id.endsWith("x")) || (id.charAt(17) >= '0' && id.charAt(17) <= '9')) {
			return true;
		} else {
			return false;
		}
	}
	public void say() {
		Calendar c=Calendar.getInstance();
		String year=id.substring(6, 10);
		String month=id.substring(10, 12);
		String day=id.substring(12, 14);
		int age = c.get(Calendar.YEAR) -  Integer.valueOf(year);
		System.out.println("�������ڣ�" + year + "-" + month + "-" + day);
		System.out.println("���䣺 " + age);
		System.out.print("�Ա�:");
		if(((id.charAt(16)) & 1) == 1) {
			System.out.println("��");
		}else {
			System.out.println("Ů");
		}
	}
}

public class ID {
	public static void main(String[] args) {
		People me = new People();
		me.setId("41142619900408803X");
		try {
			if(me.verification() == true) {
				me.say();
			} else {
				throw new Exception("���֤��ʽ����");
			}
		} catch (Exception e) {
			// TODO �Զ����ɵ� catch ��
			e.printStackTrace();
			System.out.println(e.getMessage());
		}
	}
}