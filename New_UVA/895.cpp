#include <bits/stdc++.h>


using namespace std ;

char dic[10005][15], chk[15] ;

int a[27], b[27] ;

int main()
{
    int i, j, k, l, f, m, n, cnt ;
    i = 0, k = 0 ;
    while( gets(chk) && chk[0] != '#' )
    {
        strcpy( dic[i++], chk ) ;
    }
    while( gets(chk) && chk[0] != '#' )
    {
        l = strlen(chk) ;
        memset(b, 0, sizeof b) ;
        memset(a, 0, sizeof a) ;
        for( m = 0; m < l; m++ )
            b[chk[m]-'a']++ ;
        cnt = 0 ;
        for( j = 0; j < i; j++ )
        {
            l = strlen(dic[j]) ;
            f = 0 ;
            memset(a, 0, sizeof a) ;
            for( m = 0; m < l; m++ )
                a[dic[j][m]-'a']++ ;
            for( m = 0; m < 26; m++ )
            {
                if( a[m] > b[m] )
                {
                    f = 1 ;
                    break ;
                }
            }
            if( !f )
                cnt++ ;
        }
        printf("%d\n", cnt) ;
    }
    return 0 ;
}
