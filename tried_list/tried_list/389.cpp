#include <bits/stdc++.h>

using namespace std;


int main()
{
    //freopen("389.txt", "r", stdin) ;
    int i, j, k, l, m , b_f, b_t, minu, f  ;
    string b ;
    char a[1010] , *p, c[1010][1010], d[1010] ;
    while( gets(d) )
    {
        p = strtok(d, " ") ;
        b = "" ;
        k = 0 ;
        while ( p != NULL )
        {
            strcpy(c[k], p) ;
            p = strtok(NULL, " ") ;
            k++ ;
        }
        strcpy(a, c[0]) ;
        b_f = atoi(c[1]) ;
        b_t = atoi(c[2]) ;
        m = strtol( a, &p, b_f ) ;
        i = 0, f = 0 ;
        if( m < 0 )
        {
            f = 1 ;
            m = m * ( -1 ) ;
        }
        while ( m )
        {
            k = m % b_t ;
            if( k < 10 )
                b += k + '0' ;
            else
                b += char ( (k - 10 ) + 'A' ) ;
            m /= b_t ;
        }
        if( b.size() == 0 )
            puts("      0") ;
        else
        {
            k = b.length() ;
            if( k > 7 )
                printf("  ERROR\n") ;
            else
            {
                if( f == 0 )
                    l = 7 - k;
                else
                    l = 7 - k - 1 ;
                for( i = 0; i <l ; i++)
                    printf(" ") ;
                if( f == 1 )
                printf("-") ;
                for( i = k - 1; i>=0; i--)
                {
                    printf("%c", b[i]) ;
                }
                puts("") ;
            }
        }
    }
    return 0 ;
}
