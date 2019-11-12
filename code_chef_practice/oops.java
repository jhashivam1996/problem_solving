
class base{
	void area(int a,int b){
		System.out.println("area of base: "+a*b);
	}
}

class derived extends base{
	void area(int a,int b){
		System.out.println("area of derived: "+a*b);
	}
}

class oops{
	public static void main(String[] args){
		derived dr=new derived();
		dr.area();
	}
}