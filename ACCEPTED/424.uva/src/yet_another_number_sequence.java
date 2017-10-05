import java.util.Scanner;

import java.math.BigInteger;

public class yet_another_number_sequence {

    public static void main(String[] args) {
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
