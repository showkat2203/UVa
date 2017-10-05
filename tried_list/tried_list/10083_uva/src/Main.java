
import java.math.BigDecimal;
import java.math.MathContext;
import java.util.Scanner;


public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        BigDecimal d,res,T,A,r,t;
        MathContext mc = new MathContext(100000);
        int a,b,n;          
        String R;
        while(s.hasNext()) 
        {
           T = s.nextBigDecimal();
           a = s.nextInt();
           b = s.nextInt();           
           res = T.pow(a);
           res = res.subtract(BigDecimal.ONE);             
           t = T.pow(b);
           t = t.subtract(BigDecimal.ONE); 
           if(t.compareTo(BigDecimal.valueOf(0)) == 0) {
                         System.out.println("("+T+"^"+a+"-1)/"+"("+T+"^"+b+"-1) is not an integer with less than 100 digits.");         
                         continue; 
          } 
           r = res.divide(t,mc);          
           R = r.toString();   
           n = R.length();                                              
           if(n<100)
                System.out.println("("+T+"^"+a+"-1)/"+"("+T+"^"+b+"-1) "+r); 
           else 
                 System.out.println("("+T+"^"+a+"-1)/"+"("+T+"^"+b+"-1) is not an integer with less than 100 digits.");         
	}
    }
}
