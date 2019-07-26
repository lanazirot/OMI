public class Main {

	private static java.util.Map<Integer, java.math.BigInteger> memo = new java.util.HashMap<>();

	
	public static void main(String[] args) {
		java.util.Scanner sc = new java.util.Scanner(System.in);
		System.out.println();

		int n;
		
		while(sc.hasNextInt()){
			n=sc.nextInt();
			System.out.println(fibonacci(n));
		}
		

	}


public static java.math.BigInteger fibonacci(int n) {
    if (n == 0 || n == 1) {
        return java.math.BigInteger.valueOf(n);
    }
    if (memo.containsKey(n)) {
        return memo.get(n);
    }
    java.math.BigInteger v = fibonacci(n - 1).add(fibonacci(n - 2));
    memo.put(n, v);
    return v;
}

}
