#include<bits/stdc++.h>

#define MAX 5000006

bool seev[MAX];
int prime_list[MAX] ;

bool palindrome_check(int n)
{
    int m , sum = 0, k = n ;
    while( n != 0 )
    {
        m = n % 10 ;
        sum = sum * 10 + m ;
        n = n / 10 ;
    }
    if(sum == k)
        return true ;
    else
        return false;
}

void is_prime()
{
    int k ;
    seev[0]= true ;
    seev[1] = false;
    for(int i = 2; i < sqrt(MAX) ; i++)
        if(seev[i] == false)
            for(int j = i + i ; j < MAX ; j = j + i)
                seev[j] = true;
}

int main()
{
    is_prime();
    long long n, f = 0 ;
    while( scanf("%lld", &n) == 1 )
    {
        if( palindrome_check(n) && seev[n] == false)
        {
            printf("%lld\n", n * 2);
            f = 1 ;
            break ;
        }
        else
            printf("%lld\n", n * 2);
    }
    return 0 ;
}
