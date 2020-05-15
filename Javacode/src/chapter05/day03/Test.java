package chapter05.day03;
import java.util.Calendar;
class Identity {
	private String id;
	public String getId() {
		return id;
	}
	public void setId(String id) throws Exception {
		if(id.length() == 18 && (id.endsWith("X") || id.endsWith("x")
				|| Character.isDigit(id.charAt(17)))) {
			this.id = id;
		} else {
			throw new Exception("���֤��ʽ����");
		}
	}
	public String getYear() {
		return id.substring(6, 10);
	}
	public String getMonth() {
		return id.substring(10, 12);
	}
	public String getDay() {
		return id.substring(12, 14);
	}
	public int getAge() {
		Calendar c=Calendar.getInstance();
		int age = c.get(Calendar.YEAR) - Integer.valueOf(id.substring(6, 10));
		return age;
	}
	public String getGender() {
		return (id.charAt(16) % 2 == 0) ? "Ů" :"��";
	}
}

public class Test {
	public static void main(String[] args) {
		Identity Bob =new Identity();
		try {
			Bob.setId("14270320000311002");
			System.out.println("�������ڣ�" + Bob.getYear() + "��" 
			+ Bob.getMonth() + "��" + Bob.getDay() + "��");
			System.out.println("���䣺" + Bob.getAge());
			System.out.println("�Ա�" + Bob.getGender());
		} catch (Exception e) {
			// TODO: handle exception
			e.printStackTrace();
			System.out.println(e.getMessage());
		}
	}
}

