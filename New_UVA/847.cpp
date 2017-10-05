#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long n, i, j, k, l, p = 0, m , a[1010] ;
    a[0] = 1, a[1] = 9 ;
    for( i = 2 ; a[i-1] <= 4294967295 ; i++ )
        if( i % 2 == 0 )
            a[i] = a[i-1] * 2 ;
        else
            a[i] = a[i-1] * 9 ;
//    for( j = 0; j<i; j++)
//        printf("%lld ", a[j]) ;
//    puts("") ;
//    printf("%lld\n", i) ;
    while ( scanf("%lld", &n) == 1 )
    {
        p = 0 ;
        for( j = 1; j<i; j++)
        {
            if( a[j-1] < n && n<= a[j])
                if( p % 2 == 0 )
                {
                    printf("Stan wins.\n");
                    break;
                }
                else
                {
                    printf("Ollie wins.\n");
                    break ;
                }
            p++ ;
        }
    }
    return 0 ;
}

