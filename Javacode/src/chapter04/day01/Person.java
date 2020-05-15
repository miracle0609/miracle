package chapter04.day01;

public class Person extends Object {
	private String name="";

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}
	
	public Person() {
		super();
	}
	public Person(String name) {
		this.name = name;
	}
	
}