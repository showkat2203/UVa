#include <bits/stdc++.h>

using namespace std ;

int main()
{
    //freopen("in.txt", "r", stdin) ;
    int i, j, k, l, m , n, chain, cas = 0, last, subtr, addi, fir, chk ;
    int a[15] ;
    while( scanf("%d", &k) == 1 && k )
    {
        printf("Original number was %d\n", k) ;
        fir = last = addi = subtr = chain = 0 ;
        addi = -1, subtr = -1 ;
        map < int, int > how ;
        while( 1 )
        {

            addi = subtr ;
            l = 0, n = 0 ;
            fir = 0, last = 0 ;
            while( k != 0 )
            {
                a[n++] = k % 10 ;
                k /= 10 ;
            }
            sort(a, a + n ) ;
            for( i = 0; i < n; i++ )
                fir = fir * 10 + a[i] ;
            for( i = n - 1; i >= 0 ; i-- )
                last = last * 10 + a[i] ;
            how[fir] = 1, how[last] = 1 ;
            subtr = last - fir ;
            printf("%d - %d = %d\n", last, fir, subtr) ;

            k = subtr ;
            last = subtr ;
            chain++ ;
            if( how.find(last) != how.end() )
                break ;
            else
                how[last] = 1 ;
        }
        printf("Chain length %d\n", chain) ;
        puts("") ;
    }
    return 0 ;
}


