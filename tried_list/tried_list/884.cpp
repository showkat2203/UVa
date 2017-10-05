#include<bits/stdc++.h>

#define MAX 1000010
#define sq sqrt(1000010)

using namespace std;

bool yes_no[MAX] ;
int prime[MAX], sz = 0, res[MAX] ;

void seive()
{
    int n, i, j ;
    memset( yes_no, false, sizeof yes_no ) ;
    yes_no[0] = yes_no[1] = true ;
    yes_no[2] = false ;
    prime[sz++] = 2;
    for( i = 4; i <= MAX; i+= 2)
        yes_no[i] = true ;
    for( i = 3; i <= sq; i += 2 )
        if( yes_no[i] == false )
            for( j = i * i ; j <= MAX; j += ( 2 * i ) )
                yes_no[j] = true ;

    for( i = 3; i <= MAX; i += 2 )
        if( yes_no[i] == false )
            prime[sz++] = i ;
}


void result()
{
    res[ 1 ] = 0 ;
    int n, cnt, i, j ;
    for( i = 2 ; i < MAX ; i++ )
    {
        n = i ;
        if( yes_no[i] == false )
        {
            res[i] = res[i-1] + 1 ;
            continue ;
        }
        cnt = 0 ;
        for( j = 0 ; j < sz && ( prime[j] * prime[j] ) <= n ; j++  )
        {
            while( n % prime[j] == 0 )
            {
                n /= prime[j] ;
                cnt++ ;
            }
        }
        if( n != 1 )
            cnt++;
        res[i] = cnt + res[i-1] ;
    }
//    for( i = 2 ; i <= 20 ; i++ )
//        printf( "%d %d\n", i, res[i] ) ;
}


int main()
{
    seive() ;
    result() ;
    int n, i, j, l ;
    while( scanf("%d", &n) == 1 )
    {
        printf("%d\n", res[ n ]) ;
    }
    return 0 ;
}

