
/**
 *
 * @author Neerleepto Sonnet
 */

import java.math.BigInteger;

import java.util.Scanner;

public class Main {

   
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        BigInteger A = new BigInteger ("0");
        BigInteger B = new BigInteger ("0");
        int n,v,i,j,k,cnt=1;               
           n = s.nextInt();
           for(i=1;i<=n;i++)
            {
                BigInteger a = s.nextBigInteger();
                BigInteger b = s.nextBigInteger();  
                BigInteger res1 = a.subtract(b);
                System.out.println(res1);
           }
    }
    
}
