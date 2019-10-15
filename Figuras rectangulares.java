public class Main {
	static java.util.Scanner s = new java.util.Scanner(System.in);

	public static void main(String[] ar) {

		int area;
		area = s.nextInt();

		int auxN = (int) Math.sqrt(area);
		
		
		if ((auxN * auxN == area && (auxN < area || auxN > area)) && ((area / 2) * 2 == area)) {
			
			System.out.println("ambos");
		}else if (auxN * auxN == area && (auxN < area || auxN > area)) {
			System.out.println("cuadrado");

		}else if (((area / 2) * 2 == area)) {
			System.out.println("rectangulo");

		}else{
			
		
		System.out.println("ninguno");
		
		}
		
	}
