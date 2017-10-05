
import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner s = new Scanner(System.in);
		BigInteger zero = new BigInteger ("0");
		BigInteger sum = new BigInteger ("0");
		while(true) {
			BigInteger b = s.nextBigInteger();
			if(b.equals(zero)) break;
			sum = sum.add(b);
		}
		System.out.println(sum.toString());
    }
    
}
