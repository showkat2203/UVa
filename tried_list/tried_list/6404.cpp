#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tst, i, j, k, l, f, b[11], fl, m ;
    char a[1010] ;
    scanf("%d", &tst);
    getchar() ;
    while(tst--)
    {
        scanf("%s", a) ;
        memset(b, 0, sizeof b) ;
        k = 0 ,f = 0, j = 0, m = 0, fl = 0 ;
        l = strlen(a) ;
        for( i = 0; i<l; i++)
            b[a[i] - '0']++ ;
        for( i = 0; i<11; i++ )
        {
            if( b[i] >= 3 )
            {
                j = 1;
                break ;
            }
        }
        for( i = 0; i<l - 2; i++ )
        {
            if( ( ( a[i] - '0' ) + 1 == ( a[i+1] - '0' )  && ( a[i] - '0' ) + 2 == ( a[i+2] - '0' ) ) || ( ( a[i] - '0' ) - 1 == ( a[i+1] - '0' ) && ( a[i] - '0' ) - 2 == ( a[i+2] - '0' ) ) )
            {
                f = 1 ;
                break ;
            }
        }
        if( f == 1 || j == 1 )
            puts("WEAK");
        else
            puts("ACCEPTABLE");
    }
    return 0 ;
}
