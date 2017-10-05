#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10010], b[10100], i, j, k, p, q, n , cnt = 0, pos, f ;
    while( scanf("%d %d", &p, &q) == 2 && p && q )
    {
        for(i = 0; i<p; i++)   scanf("%d", &a[i]) ;
        sort(a, a + i) ;
        for(j = 0; j<q; j++)    scanf("%d", &b[j]) ;
        printf("CASE# %d:\n", ++cnt) ;
        for( j = 0; j < q; j++)
        {
            f = 0 ;
            for(i = 0; i < p; i++ )
            {
                if( a[i] == b[j] )
                {
                    f = 1 ;
                    pos = i + 1 ;
                    break ;
                }
            }
            if( f == 0 )
                printf("%d not found\n", b[j] ) ;
            else
                printf("%d found at %d\n", b[j], pos) ;
        }
    }
    return 0;
}



