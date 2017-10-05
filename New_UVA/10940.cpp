#include <bits/stdc++.h>

using namespace std ;

int a[500005] ;

void ans()
{
    int i, j, n, k = 0, l, m ;
    a[1] = 1 ;
    for( i = 2; i <= 500005; i++)
    {
        k += 2 ;
        a[i] = k ;
        if( i == k )
            k = 0 ;
    }
}


int main()
{
    ans() ;
    int n, res, i, j, k, l, m ;
    while ( ~scanf("%d", &n) && n )
    {
        printf("%d\n", a[n]) ;
    }
    return 0 ;
}
