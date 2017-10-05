#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int i, j, k, l, m, n ;
    char ans[100010], given[100010] ;
    int a[27], b[27] ;
    while(gets(given))
    {
        l = strlen(given) ;
        memset(a, 0, sizeof a) ;
        memset(b, 0, sizeof b) ;
        for( i = 0; i < l; i++ )
        {
            if( given[i] >= 'a' && given[i] <= 'z' )
                a[given[i]-'a']++ ;
            else if( given[i] >= 'A' && given[i] <= 'Z' )
                b[given[i]-'A']++ ;
        }
        m = n = 0;
        for( i = 0; i < 26; i++ )
        {
            if( a[i] % 2 != 0 )
            {
                m++ ;
            }
            if( b[i] % 2 != 0 )
            {
                n++ ;
            }
        }
        if( m > 1 && ( n % 2 == 0 || n % 2 != 0 )  )
        {
            for( i = 0; i < 26; i++ )
            {
                if( a[i] % 2 != 0 && m > 1 )
                {
                    a[i]++;
                    m-- ;
                }
                if( b[i] % 2 != 0 )
                    b[i]++;
            }
        }
        else if( n > 1 && ( ( m % 2 == 0 || m % 2 != 0 ) ) )
        {
            for( i = 0; i < 26; i++ )
            {
                if( b[i] % 2 != 0 && n > 1 )
                {
                    b[i]++;
                    n-- ;
                }
                if( a[i] % 2 != 0 )
                    a[i]++;
            }
        }
        int len = 0 ;
        for( i = 0; i < 26; i++ )
        {
            len += ( a[i] + b[i] ) ;
        }
        printf("%d\n", len) ;
        for( i = 0; i < 26; i++ )
        {
            for( j = 0; j < a[i]; j++ )
            {
                printf("%c", i + 'a') ;
            }
        }
        puts("") ;
        for( i = 0; i < 26; i++ )
        {
            for( j = 0; j < b[i]; j++ )
            {
                printf("%c", i + 'a') ;
            }
        }
        puts("") ;
        printf("%d %d\n", m, n ) ;
    }
    return 0 ;
}
