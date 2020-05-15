package chapter05.day03;
//包装类
/*Java是一个面向对象的编程语言，基本类型并不具有对象的性质
	为了让基本类型也具有对象的特征，就出现了包装类型
	如我们在使用集合类型Collection时就一定要使用包装类型而非基本类型
	它相当于将基本类型“包装起来”，使得它具有了对象的性质
	并且为其添加了属性和方法，丰富了基本类型的操作。
	另外，当需要往ArrayList，HashMap中放东西时，像int，double这种基本类型是放不进去的
	因为容器都是装object的，这时就需要这些基本类型的包装器类了。*/
public class Demo4 {
	@SuppressWarnings("deprecation")
	public static void main(String[] args) {
		int m = 20;
		Integer n = new Integer(10);
		n = m;//自动装箱:将基本数据类型int赋值给包装类Integer
		int c = n;//自动拆箱: 将包装类Integer赋值给基本数据类型int
		System.out.println(c + n);
	}
}
