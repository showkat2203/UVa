#include <bits/stdc++.h>

using namespace std;

long long n, i, j, k, l, a[500][500], N = 50 ;

void pascal()
{
    for( i = 0 ; i<=N; i++)
        for( j = 0; j<=i; j++)
            if( i == 0 || i == j )
                a[i][j] = 1;
            else
                a[i][j] = a[i-1][j-1] + a[i-1][j] ;
    for(i = 0; i<N; i++ )
    {
        for( j = 0; j<=i; j++)
        {
            printf("%lld ", a[i][j]) ;
        }
        puts("") ;
    }
}

int main()
{
    pascal() ;
    return 0 ;
}

