package chapter03.zuoye;

public class Supermarket {
	private String supermarketName;
	private int num;
	private Goods member[] = new Goods[100];
	public String getSupermarketName() {
		return supermarketName;
	}
	public void setSupermarketName(String supermarketName) {
		this.supermarketName = supermarketName;
	}
	public Goods[] getMember() {
		return member;
	}
	public void setMember(Goods[] member) {
		this.member = member;
	}
	public Supermarket(String supermarketName) {
		super();
		this.supermarketName = supermarketName;
	}
	public Supermarket() {
		
	}
	//�����Ʒ
	public void addGoods(Goods goods) {
		if (num < 100) {
			member[num] = goods;
			num++;
		}else {
			System.out.println("������������");
		}
	}
	//������Ʒ
	public double search(Consumer consumer, Supermarket supermarket, Goods goods) {
		int  flag = 0;
		double price = 0;
		for (int i = 0; i < num; i++) {
			flag = (member[i].getGoodsName()).compareTo(goods.getGoodsName());
			if(flag == 0){
				System.out.println("������" + consumer.getConsumerName() 
						+"��" + this.supermarketName
						+ "��������" + member[i].getGoodsName() 
						+ ",����" + member[i].getGoodsPrice() + "Ԫ");
				price = member[i].getGoodsPrice();
				break;
			} else {
				continue;
			}
		}
		if (flag != 0) {
			System.out.println("�����������Ʒ�����ڣ���������ѡ��Ʒ");
		}
		return price;
	}
}
