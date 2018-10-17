package waug;

import java.util.Scanner;

public class SplitCamel {
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		
		String[] splitedStr=str.split("(?=\\p{Upper})");
		
		for(int i=0; i<splitedStr.length; i++){
			System.out.println(splitedStr[i]);
		}
	}
}
