
import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author Neerleepto Sonnet
 */
public class Main {

    public static void main(String[] args) {
            Scanner s = new Scanner(System.in);           
            while(s.hasNext())
            {
                BigInteger a = s.nextBigInteger();
                BigInteger b = s.nextBigInteger();                 
                System.out.println(a.multiply(b));
           }
    }
}
