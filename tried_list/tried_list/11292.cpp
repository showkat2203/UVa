#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("11292.txt", "r", stdin );
    int m, n,  i, j, k, l, ans, dr[20010], a[20101] , tst, s, sum, f ;
    while ( scanf("%d %d", &n, &m) == 2 && n && m )
    {
        sum = s = 0 ;
        memset( a, 0, sizeof a ) ;
        for(i = 0; i<n; i++)
            scanf("%d", &dr[i]) ;
        sort(dr, dr + i ) ;
        for(i = 0; i<m; i++)
            scanf("%d", &a[i]) ;
        sort(a, a + i) ;
        f = 0 ;
        for( i = 0; i<n; i++ )
        {
            for(j = 0; j < m ; j++)
            {
                if( dr[i] <= a[j] && a[j] != -1 )
                {
                    s += a[j] ;
                    a[j] = -1;
                    f++ ;
                    break ;
                }
            }
        }
        if( f == n )
            printf("%d\n", s) ;
        else
            printf("Loowater is doomed!\n") ;
    }
    return 0 ;
}
