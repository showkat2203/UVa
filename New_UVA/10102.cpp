#include <bits/stdc++.h>

using namespace std ;

int main()
{
    char a[110][110];
    int one, three, i, j, maxi, m, p, q, mini ;
    while ( scanf("%d", &m) == 1 )
    {
        p = 0, q = 0, maxi = 0, mini = 1010010 ;
        for( i = 0; i < m ; i++ )   for( j = 0; j < m; j++) scanf(" %c", &a[i][j]) ;
        for( i = 0; i < m ; i++ )
        {
            for( j = 0; j < m; j++)
            {
                mini = 1010010 ;
                if( a[i][j] == '1' )
                {
                    for( p = 0; p < m; p++)
                    {
                        for( q = 0; q < m; q++)
                        {
                            if( a[p][q] == '3' )
                                mini = min( mini, (abs( i - p ) + abs( j - q ))) ;
                        }
                    }
                    maxi = max(maxi, mini) ;
                }
            }
        }
        printf("%d\n", maxi) ;
    }
    return 0 ;
}
