#include <bits/stdc++.h>


using namespace std ;

int main()
{
    int i, j, k, l, tst, a[30] ;
    char given[500] ;
    double res ;
    scanf("%d", &tst) ;
//    getchar() ;
//    getchar() ;
    while(tst--)
    {
        memset(given,'.', sizeof given) ;
        scanf("%s", given) ;
        res = 0.0 ;
        l = strlen(given) ;
        memset(a, 0, sizeof a) ;
        int sum ;
        for( i = 0; i < l; i++ )
        {
            if( given[i] == 'C' || given[i] == 'H' || given[i] == 'O' || given[i] == 'N' )
            {
                sum = 0 ;
                for( j = i + 1; j < l; j++ )
                {
                    if( given[j] >= '0' && given[j] <= '9')
                    {
                        sum = sum * 10 + ( given[j] - '0') ;
                    }
                    else
                        break ;
                }
                if( sum == 0 )
                    a[given[i]-'A']++ ;
                else
                    a[given[i]-'A'] += sum ;
            }
        }
        res = double( double( a['C' - 'A'] * 12.01 ) + double( double ( a['H' - 'A'] )  * 1.008 ) + double( double ( a['O' - 'A'] ) * 16.00 )  + double( double(a['N' - 'A']) * 14.01 ) )  ;
        printf("%.3lf\n", res) ;
    }
    return 0 ;
}
