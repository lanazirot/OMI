import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
	
	static String binary(long n) {
		if(n==0)return "";
		return n%2==0? "0"+binary(n/2) : "1"+binary(n/2);
	}
	static long countUnos(String s) {
		int p=0;
		for (int i = 0; i < s.length(); i++) {
			if(s.charAt(i)=='1') {
				p++;
			}
		}
		return p;
	}
	
	static boolean isPalindrome(String s) {
		  int n = s.length();
		  for (int i = 0; i < (n/2); ++i) {
		     if (s.charAt(i) != s.charAt(n - i - 1)) {
		         return false;
		     }
		  }

		  return true;
		}
	
	
	
	public static void main(String[] args) {
		
		System.out.println();
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		List<String> res = new ArrayList<String>();
		
		String s;
		for (int i = 0; i <n; i++) {
			
			String pox = "";
			s = sc.next();
			for(int j=0;j<s.length();j++) {
				pox+=String.valueOf(countUnos(binary(s.charAt(j))));
			}
			res.add(pox);
		}
		
		for(String x:res) {
			if(isPalindrome(x)) {
				System.out.println("SI "+x);
			}else {
				System.out.println("NO");
			}
		}
		
	}
}
