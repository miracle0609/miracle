package chapter03.zuoye;

import java.util.Scanner;

public class Test {
	public static void main(String[] args) {
		Consumer xiaohong = new Consumer();
		xiaohong.setConsumerName("С��");
		Goods goods1 = new Goods("���ȳ�",2);
		Goods goods2 = new Goods("����",6);
		Goods goods3 = new Goods("���",3);
		Goods goods4 = new Goods("����ֽ",1);
		Supermarket xuezi = new Supermarket("xuezi");
		xuezi.addGoods(goods1);
		xuezi.addGoods(goods2);
		xuezi.addGoods(goods3);
		xuezi.addGoods(goods4);
		//double sum = 0;
		Scanner src = new Scanner(System.in);
		System.out.println("��ӭ����" + xuezi.getSupermarketName() + "����");
		System.out.println("���������빺�����Ʒ����,����#�������");
		while(src.hasNextLine()) {
			String buygoods_name = src.next();//�������빺�����Ʒ����
			src.nextLine();
			if (buygoods_name.equals("#")) {
				break;
			}
			Goods goods_buy = new Goods(buygoods_name);
			xuezi.search(xiaohong, xuezi, goods_buy);
			//sum += xuezi.search(xiaohong, xuezi, goods_buy);
			System.out.println("���������빺�����Ʒ����,����#�������");
			
		}
		//System.out.println("������һ������" + sum + "Ԫ,��ӭ�´ι��٣�");
		src.close();
	}
}
