#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int i, j, cas = 0, tst, n, k, cnt , f ;
    char a[5500] ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        f = 0 ;
        scanf("%d %d %s", &n, &k, &a) ;
        cnt = 0 ;
        for( i = 0; i<n; i++)
        {
            f = 0 ;
            for( j = i+1 ; j <= i+k && j < n; j++)
            {
                if( a[i] == a[j] && f == 0 )
                {
                    cnt++, f = 1;
                }
            }
        }
        printf("Case %d: %d\n", ++cas, cnt) ;
    }
    return 0 ;
}

