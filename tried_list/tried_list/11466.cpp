#include<bits/stdc++.h>
#define MAX 2000
#define M 2000

using namespace std ;

bool seev[MAX] ;

void is_prime() ;
long long prime[M] ;

int main()
{
    is_prime() ;
//    long long n, m, ans , res, N ;
//    int i, j, k, f ;
//    while( scanf("%lld", &n) == 1 && n )
//    {
//    }
    return 0 ;
}

void is_prime()
{
    long long k = 0;
    for(long long i = 2; i <= sqrt(MAX) ; i++)
    {
        if(seev[i] == false)
        {
            prime[k++] = i ;
            for(long long j = i + i ; j <= MAX ; j = j + i)
            {
                seev[j] = true;
            }
        }
    }
    seev[0]=seev[1]=true;
}
