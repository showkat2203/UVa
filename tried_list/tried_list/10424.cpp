#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int digit(int n)
{
    int m = 0, k = 0;
    while( n != 0 )
    {
        m += n % 10;
        n /= 10;
    }
    if( m > 9 )
        return digit(m);
    else
        return m;
}

int main()
{
    //freopen("10424.txt","r",stdin);
    char A[30], B[30];
    int i, j, k, l, m, n, sum1, sum2;
    while( gets(A) )
    {
        gets(B);
        sum1 = sum2 = 0;
        l = strlen(A);
        for(i=0; i<l; i++)
        {
            if(A[i] >= 'A' && A[i] <= 'Z' )
                A[i] = tolower(A[i]);
            if( A[i] >= 'a' && A[i] <= 'z' )
                sum1 += ( A[i] - 'a' ) + 1;
        }
        l = strlen(B);
        for(i=0; i<l; i++)
        {
            if( B[i]>= 'A' && B[i] <= 'Z' )
                B[i] = tolower(B[i]);
            if( B[i] >= 'a' && B[i] <= 'z' )
                sum2 += ( B[i] - 'a' ) + 1;
        }
        m = digit(sum1) ;   n = digit(sum2) ;
        if(m == 0 && n == 0)
            puts("");
        else if( m < n )
            printf("%.2lf %%\n", ( (double (m) * 100.0 ) / double (n) ) );
        else
            printf("%.2lf %%\n", ( (double (n) * 100.0 ) / double (m) ) );

    }
    return 0;
}
