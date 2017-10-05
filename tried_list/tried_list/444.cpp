#include<stdio.h>
#include<string.h>
#include<math.h>
#include <ctype.h>

using namespace std;

int main()
{
    char A[1000];
    int i,j,k,l,n,m,a;
    //freopen("444.txt","r",stdin);
   // freopen("444_output.txt","w",stdout);
    while(gets(A))
    {
        m=0;
        n=0;
        if(isalpha(A[0]))
        {
            for(i=strlen(A)-1;i>=0;i--)
            {
                m = A[i];
                while( m != 0 )
                {
                    n = m % 10;
                    printf("%d",n);
                    m = m / 10;
                }
                //printf("%d",A[i]);
            }
            printf("\n");
        }
        else
        {
            a = 0;
            for(j=strlen(A)-1;j>=0;j--)
            {
                a = ( a * 10 )+ (A[j]- '0');
                if(a >= 32 && a<= 127)
                {
                    printf("%c",a);
                    a = 0;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
