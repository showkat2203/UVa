#include <bits/stdc++.h>

typedef long long ll ;

using namespace std;

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int i, k, n, j, cas = 0, tst ;
    char a[18] ;
    scanf("%d", &tst) ;
    while( tst-- )
    {
        scanf("%d %d", &n, &j) ;
        if( cas )
            puts("") ;
        cas++ ;
        k = n - j ;
        for( i = 0; i < k; i++ )
            a[i] = '0' ;
        for( i = k; i < n; i++ )
            a[i] = '1' ;
        a[n] = NULL ;
        sort(a, a + n ) ;
        do
        {
            printf("%s\n", a) ;
        }while(next_permutation(a, a + n )) ;
    }
    return 0 ;
}

