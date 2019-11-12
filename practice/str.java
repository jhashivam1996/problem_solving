class str{
	public static void main(String args[]){
		String str1="acrtycosaaaa";
		int i;
		int count=0;
		for( i=str1.length()-1;i>=0;i--){
			if(str1.charAt(i)!='a' && str1.charAt(i)!='e' && str1.charAt(i)!='i' && str1.charAt(i)!='o' &&  str1.charAt(i)!='u' ){
					count++;
			}
			if(count==3){
				break;
			}
		}
		System.out.print(str1.charAt(i));		
		
	}
}