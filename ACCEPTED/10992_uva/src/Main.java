import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public static void main(String[] args) {              
    Scanner s = new Scanner(System.in);
    BigInteger a ;
    int cnt = 0,lip;
    int f;
    while(s.hasNext())
    {
        f = 0;
        lip = 0;
        a = s.nextBigInteger();
        if(a.compareTo(BigInteger.ZERO)==0)
            break;
        if(cnt!=0)
            System.out.println();
         System.out.println(a);
        cnt++;
        BigInteger n = BigInteger.valueOf(2148);
        BigInteger A ;
        int k = 0;             
        if(a.compareTo(n)<0)
        {
             System.out.println("No ghost will come in this year");
        }
        else if(a.compareTo(n)==0)
        {
            System.out.println("Ghost of Tanveer Ahsan!!!");
            System.out.println("Ghost of Shahriar Manzoor!!!");
            System.out.println("Ghost of Adrian Kugel!!!");
            System.out.println("Ghost of Anton Maydell!!!");
            System.out.println("Ghost of Derek Kisman!!!");
            System.out.println("Ghost of Rezaul Alam Chowdhury!!!");
            System.out.println("Ghost of Jimmy Mardell!!!");
            System.out.println("Ghost of Monirul Hasan!!!");
            System.out.println("Ghost of K. M. Iftekhar!!!");                      
        }
        else 
        {
            BigInteger c = BigInteger.valueOf(4);
            BigInteger c1 = BigInteger.valueOf(100);
            BigInteger c2 = BigInteger.valueOf(400);
            if((a.mod(c)==BigInteger.ZERO&&a.mod(c1)!=BigInteger.ZERO)||(a.mod(c2)==BigInteger.ZERO))
            {
                lip = 1;
                f++;
            } 
            
            
            A = BigInteger.valueOf(2);
            a = a.subtract(n);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                  System.out.println("Ghost of Tanveer Ahsan!!!");
                  f++;
            }
            A = BigInteger.valueOf(5);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                  System.out.println("Ghost of Shahriar Manzoor!!!");
                  f++;
            }
            A = BigInteger.valueOf(7);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                  System.out.println("Ghost of Adrian Kugel!!!");
                  f++;
            }
            A = BigInteger.valueOf(11);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                  System.out.println("Ghost of Anton Maydell!!!");
                  f++;
            }
            A = BigInteger.valueOf(15);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                  System.out.println("Ghost of Derek Kisman!!!");
                  f++;
            }
            A = BigInteger.valueOf(20);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                  System.out.println("Ghost of Rezaul Alam Chowdhury!!!");
                  f++;
            }
            A = BigInteger.valueOf(28);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                   System.out.println("Ghost of Jimmy Mardell!!!");
                   f++;
            }
            A = BigInteger.valueOf(36);
            if(a.mod(A)==BigInteger.valueOf(0))       
            {
                  System.out.println("Ghost of Monirul Hasan!!!");
                  f++;
            }
            if(lip == 1) System.out.println("Ghost of K. M. Iftekhar!!!");
            if(f==0)
                System.out.println("No ghost will come in this year");
        }      
        
       }             
   } 
}
