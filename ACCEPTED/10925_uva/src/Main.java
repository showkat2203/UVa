
import java.math.BigInteger;

import java.util.Scanner;

/**
 *
 * @author Neerleepto Sonnet
 */
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        BigInteger zero = new BigInteger ("0");
        BigInteger res = new BigInteger ("0");
        int n,v,i,j,k,cnt=1;               
        while(true) 
        {
           n = s.nextInt();
           v = s.nextInt();
           BigInteger sum =BigInteger.ZERO;
           if(n==0||v==0)
               break;
            for(i=1;i<=n;i++)
            {
                BigInteger b = s.nextBigInteger();
                 sum = sum.add(b);                 
           }
            System.out.println("Bill #"+cnt +" costs " +sum.toString()+": each friend should pay "+sum.divide(BigInteger.valueOf(v)));
            System.out.println();
             cnt++;
	}
    }
}
