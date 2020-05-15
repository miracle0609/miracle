package chapter03.zuoye;

import java.util.Scanner;

public class Test {
	public static void main(String[] args) {
		Consumer xiaohong = new Consumer();
		xiaohong.setConsumerName("小红");
		Goods goods1 = new Goods("火腿肠",2);
		Goods goods2 = new Goods("牙膏",6);
		Goods goods3 = new Goods("面包",3);
		Goods goods4 = new Goods("卫生纸",1);
		Supermarket xuezi = new Supermarket("xuezi");
		xuezi.addGoods(goods1);
		xuezi.addGoods(goods2);
		xuezi.addGoods(goods3);
		xuezi.addGoods(goods4);
		//double sum = 0;
		Scanner src = new Scanner(System.in);
		System.out.println("欢迎来到" + xuezi.getSupermarketName() + "超市");
		System.out.println("请输入您想购买的商品名称,输入#结束购物：");
		while(src.hasNextLine()) {
			String buygoods_name = src.next();//消费者想购买的商品名称
			src.nextLine();
			if (buygoods_name.equals("#")) {
				break;
			}
			Goods goods_buy = new Goods(buygoods_name);
			xuezi.search(xiaohong, xuezi, goods_buy);
			//sum += xuezi.search(xiaohong, xuezi, goods_buy);
			System.out.println("请输入您想购买的商品名称,输入#结束购物：");
			
		}
		//System.out.println("您本次一共消费" + sum + "元,欢迎下次光临！");
		src.close();
	}
}
