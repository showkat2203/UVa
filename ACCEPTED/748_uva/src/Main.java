
import java.math.BigDecimal;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);       
        BigDecimal res = new BigDecimal ("0.0");
        BigDecimal T = new BigDecimal ("0.0");
        String ans;
        int a,b,t;          
        String R;
        while(s.hasNext()) 
        {
           T = s.nextBigDecimal();
           a = s.nextInt();         
           res = T.pow(a);
           ans = res.stripTrailingZeros().toPlainString();
           if(ans.charAt(0)=='0')
               ans= ans.substring(1,ans.length());
           System.out.println(ans);           
	}
    }
}
