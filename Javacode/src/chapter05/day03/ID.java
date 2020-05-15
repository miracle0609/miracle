package chapter05.day03;


import java.util.Calendar;

/*18位身份证号码:第7、8、9、10位为出生年份(四位数)，第11、第12位为出生月份，第13、14
 *位代表出生日期，第17位代表性别，奇数为男，偶数为女。
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
			throw new Exception("身份证格式有误！");
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
		System.out.println("出生日期：" + year + "-" + month + "-" + day);
		System.out.println("年龄： " + age);
		System.out.print("性别:");
		if(((id.charAt(16)) & 1) == 1) {
			System.out.println("男");
		}else {
			System.out.println("女");
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
				throw new Exception("身份证格式有误！");
			}
		} catch (Exception e) {
			// TODO 自动生成的 catch 块
			e.printStackTrace();
			System.out.println(e.getMessage());
		}
	}
}