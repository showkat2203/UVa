import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);       
        BigInteger T = new BigInteger ("0");
        BigInteger A = new BigInteger ("1");
        char c;
        int a,b,t,e;        
           t = s.nextInt();
           while(t!=0)
           {
                A = s.nextBigInteger();
                s.next();
                T = s.nextBigInteger();
                BigInteger gcd = A.gcd(T);
                System.out.println(A.divide(gcd)+" / "+T.divide(gcd)) ;
                t--;
           }                     
    }
}
