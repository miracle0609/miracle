package chapter03.zuoye;

public class Goods {
	private String goodsName;//��Ʒ����
	private double goodsPrice;//��Ʒ�۸�
	public String getGoodsName() {
		return goodsName;
	}
	public void setGoodsName(String goodsName) {
		this.goodsName = goodsName;
	}
	public double getGoodsPrice() {
		return goodsPrice;
	}
	public void setGoodsPrice(int goodsPrice) {
		this.goodsPrice = goodsPrice;
	}
	public Goods(String goodsName) {
		super();
		this.goodsName = goodsName;
	}
	public Goods(String goodsName, double goodsPrice) {
		super();
		this.goodsName = goodsName;
		this.goodsPrice = goodsPrice;
	}
	public Goods() {

	}
}
