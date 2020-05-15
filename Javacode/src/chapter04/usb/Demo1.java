package chapter04.usb;
interface USB{
	abstract void open();
	abstract void close();
}

class Computer{
	public void open_computer() {
		System.out.println("������ɹ�����");
	}
	public void close_computer() {
		System.out.println("������ɹ��ػ�");
	}
	
	public void usb(USB usb) {
		usb.open();
		usb.close();
	}
}
class Mouse implements USB{
	@Override
	public void open() {
		// TODO Auto-generated method stub
		System.out.println("���ɹ���");
	}
	@Override
	public void close() {
		// TODO Auto-generated method stub
		System.out.println("���ɹ��ر�");
	}
}

class Keyboard implements USB{
	@Override
	public void open() {
		// TODO Auto-generated method stub
		System.out.println("���̳ɹ���");
	}
	@Override
	public void close() {
		// TODO Auto-generated method stub
		System.out.println("���̳ɹ��ر�");
	}
}
public class Demo1 {
	public static void main(String[] args) {
		//ʵ��������
		Computer computer = new Computer();
		computer.open_computer();
		//�����겢��
		USB usb_mouse = new Mouse();
		add_device(usb_mouse);
		//��Ӽ��̲���
		USB usb_keyboard = new Keyboard();
		add_device(usb_keyboard);
		System.out.println("===================");
		usb_mouse.close();
		usb_keyboard.close();
		computer.close_computer();
	}
	public static void add_device(USB usb) {
		if (usb instanceof Mouse) {
			Mouse mouse = (Mouse) usb; //����ת��
			System.out.println("=====�ɹ�������=====");
			mouse.open();
		} else if (usb instanceof Keyboard) { 
			Keyboard keyboard = (Keyboard) usb; //����ת��
			System.out.println("=====�ɹ���Ӽ���=====");
			keyboard.open();
		}
	}
}
