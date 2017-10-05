import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {
        BigInteger A[] = new BigInteger [610];
            A[1] = BigInteger.valueOf(1);
            A[2] = BigInteger.valueOf(2);
            for(int i=3;i<=600;i++)
            {
                A[i] = A[i-1].add(A[i-2]); 
            }
            BigInteger n,m,k;
            Scanner input = new Scanner (System.in);
            while(input.hasNext())
            {
                n = input.nextBigInteger();
                m = input.nextBigInteger();
                int cnt=0;
                if(n.compareTo(BigInteger.ZERO)==0 && m.compareTo(BigInteger.ZERO)==0)
                    break;
                for(int i=1;i<=600;i++)
                {
                    if(A[i].compareTo(n) >= 0 && A[i].compareTo(m) <= 0)
                    {
                        cnt++;
                    }

                }
                System.out.println(cnt);       
        }      
    }
    
}
