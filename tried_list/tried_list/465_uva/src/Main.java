
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Neerleepto Sonnet
 */
public class Main {

    public static void main(String[] args) {
       char c;
        BigInteger a = new BigInteger ("0");
        BigInteger b = new BigInteger ("0");
        BigInteger res = new BigInteger("0");
        Scanner s = new Scanner(System.in);           
            while(s.hasNext())
            {
               a = s.nextBigInteger();
               c = (char)s.nextInt();
               b = s.nextBigInteger();                 
               res = a.add(b);
               System.out.println(res);
           }
    }
    
}
