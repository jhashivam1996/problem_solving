import java.util.*;
class max_oocur{
	public static void main(String args[]){
		String str="asasdkdjadd";
	ArrayList<Character> ar=new ArrayList<>();
	for(int i=0;i<str.length();i++){
		ar.add(str.charAt(i));
	}
	char arr[]=str.toCharArray();
	int max=0;
	Stack<Character> st=new Stack<>();
	for(int i=0;i<str.length();i++){
		if(max<Collections.frequency(ar,arr[i])){
			max=Collections.frequency(ar,arr[i]); 
			st.push(arr[i]); 
		}
	}
	System.out.print(st.peek());	
	}
}