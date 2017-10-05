#include <bits/stdc++.h>


using namespace std ;


int a[505], sum, dp[110][25500], n ;


bool call( int i, int s )
{
    if( i == n )
        return false ;
    if( s == sum - s )
        return true ;
    if( dp[i][s] != -1 )
        return dp[i][s] ;
    int fir, sec ;
    fir = call(i + 1, s + a[i]) ;
    sec = call( i + 1, s ) ;
    if( fir || sec )
        dp[i][s] = 1 ;
    else
        dp[i][s] = 0 ;
    return dp[i][s] ;
}

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int i, j, k, m, tst ;
    string numbers ;
    scanf("%d", &tst) ;
    getchar() ;
    while(tst--)
    {
        getline(cin, numbers) ;
        sum = 0 ;
        n = 0 ;
        stringstream ss(numbers) ;
        while( ss >> a[n] )
        {
            sum += a[n] ;
            ++n ;
        }
        memset(dp, -1, sizeof dp ) ;
        m = call(0, 0) ;
//        printf("%d\n ", call( 0 , 0) ) ;
        if( m )
            puts("YES") ;
        else
            puts("NO") ;
    }
    return 0 ;
}

