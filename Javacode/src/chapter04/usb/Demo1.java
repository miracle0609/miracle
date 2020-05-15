package chapter04.usb;
interface USB{
	abstract void open();
	abstract void close();
}

class Computer{
	public void open_computer() {
		System.out.println("计算机成功开机");
	}
	public void close_computer() {
		System.out.println("计算机成功关机");
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
		System.out.println("鼠标成功打开");
	}
	@Override
	public void close() {
		// TODO Auto-generated method stub
		System.out.println("鼠标成功关闭");
	}
}

class Keyboard implements USB{
	@Override
	public void open() {
		// TODO Auto-generated method stub
		System.out.println("键盘成功打开");
	}
	@Override
	public void close() {
		// TODO Auto-generated method stub
		System.out.println("键盘成功关闭");
	}
}
public class Demo1 {
	public static void main(String[] args) {
		//实例化电脑
		Computer computer = new Computer();
		computer.open_computer();
		//添加鼠标并打开
		USB usb_mouse = new Mouse();
		add_device(usb_mouse);
		//添加键盘并打开
		USB usb_keyboard = new Keyboard();
		add_device(usb_keyboard);
		System.out.println("===================");
		usb_mouse.close();
		usb_keyboard.close();
		computer.close_computer();
	}
	public static void add_device(USB usb) {
		if (usb instanceof Mouse) {
			Mouse mouse = (Mouse) usb; //向下转型
			System.out.println("=====成功添加鼠标=====");
			mouse.open();
		} else if (usb instanceof Keyboard) { 
			Keyboard keyboard = (Keyboard) usb; //向下转型
			System.out.println("=====成功添加键盘=====");
			keyboard.open();
		}
	}
}
