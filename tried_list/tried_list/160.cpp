#include<bits/stdc++.h>
#define MAX 1000010

using namespace std;

bool seev[MAX] ;
int prime_list[MAX] ;

void is_prime()
{
    for(int i = 2; i < sqrt(MAX) ; i++)
        if( seev[i] == false )
            for(int j = i + i ; j < MAX ; j = j + i)
                seev[j] = true;
    seev[0]=seev[1]=true;
    int k = 1 ;
    for(int i = 0 ; i < MAX ; i++)
        if( seev[i] == false )
            prime_list[k++] = i ;
}

int divisor( int n, int k )
{
    int cnt = 0 ;
    while( n >= k )
    {
        cnt += n / k ;
        n = n / k ;
    }
    return cnt ;
}

int main()
{
//    freopen("160.txt", "r", stdin) ;
//    freopen("160_ouput.txt","w", stdout) ;
    is_prime();
    int n, i, f ;
    while( scanf("%d", &n) == 1 && n )
    {
        f = 0 ;
        printf("%3d! =", n) ;
        for(i=1; prime_list[i] <= n; i++)
        {
            if( i % 16 == 0 && f == 0 )
            {
                f = 1 ;
                printf("\n      ");
            }
            printf("%3d",divisor(n, prime_list[i]) ) ;
        }
        puts("") ;
    }
    return 0 ;
}
