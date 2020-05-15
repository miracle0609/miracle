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
	//添加商品
	public void addGoods(Goods goods) {
		if (num < 100) {
			member[num] = goods;
			num++;
		}else {
			System.out.println("超市容量已满");
		}
	}
	//查找商品
	public double search(Consumer consumer, Supermarket supermarket, Goods goods) {
		int  flag = 0;
		double price = 0;
		for (int i = 0; i < num; i++) {
			flag = (member[i].getGoodsName()).compareTo(goods.getGoodsName());
			if(flag == 0){
				System.out.println("消费者" + consumer.getConsumerName() 
						+"在" + this.supermarketName
						+ "超市买了" + member[i].getGoodsName() 
						+ ",花了" + member[i].getGoodsPrice() + "元");
				price = member[i].getGoodsPrice();
				break;
			} else {
				continue;
			}
		}
		if (flag != 0) {
			System.out.println("您所购买的商品不存在，请重新挑选商品");
		}
		return price;
	}
}
