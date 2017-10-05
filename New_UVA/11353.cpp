#include <bits/stdc++.h>

using namespace std ;

#define Maxi 2000001
#define sq sqrt(Maxi)

bool yes_no[Maxi] ;
int prime[500010], sz = 0 ;

struct data
{
    int num, div ;
};

data A[Maxi] ;

bool comp( const data  &a , const data &b )
{
    if( a.div == b.div )
        return a.num < b.num ;
    return a.div < b.div ;
}

void seive()
{
    int n, i, j ;
    memset( yes_no, false, sizeof yes_no ) ;
    yes_no[0] = yes_no[1] = true ;
    yes_no[2] = false ;
    prime[sz++] = 2;
    for( i = 4; i <= Maxi; i+= 2)
        yes_no[i] = true ;
    for( i = 3; i <= sq; i += 2 )
        if( yes_no[i] == false )
            for( j = i * i ; j <= Maxi; j += ( 2 * i ) )
                yes_no[j] = true ;

    for( i = 3; i <= Maxi; i += 2 )
        if( yes_no[i] == false )
            prime[sz++] = i ;
}

int counting_factor(int n)
{
    int i, f = 0, j, k, cnt = 0 ;
    for( i = 0; i < sz && prime[i] * prime[i] <= n; i++ )
    {
        while(n % prime[i] == 0)
        {
            n /= prime[i] ;
            cnt++ ;
        }
    }
    if( n > 1 )
        cnt++;
    return cnt ;
}

int main()
{
    seive() ;
    int i, j, n, cnt = 0 ;
    for( i = 1; i <= Maxi; i++ )
    {
        A[i].num = i ;
        A[i].div = counting_factor(i) ;
    }
    sort(A, A + Maxi, comp ) ;
//    for( i = 1; i <= 50; i++ )
//        printf("Case %d: %d %d\n", ++cnt, A[i].num, A[i].div ) ;
    while( scanf("%d", &n) == 1 && n)
    {
        printf("Case %d: %d\n", ++cnt, A[n].num ) ;
    }
    return 0 ;
}
