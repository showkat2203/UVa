#include<bits/stdc++.h>

using namespace std;

long long gcd (long long a,long long b)
{
    if(b==0)
        return a;
    return gcd (b,a%b);
}

long long lcm (long long a, long long b)
{
    return ( a / gcd( a, b) * b );
}

 int main()
 {
     //freopen("11889.txt", "r", stdin ) ;
     long long a, b, c, i, j, k, n, r ;
     scanf("%lld",&j);
     while(j--)
     {
        scanf("%lld %lld",&a,&c);
        if( c % a != 0 )
        {
            printf("NO SOLUTION\n");
        }
        else
        {
            r = c / a ;
            k = lcm (r, a) ;
            if(k == c )
            printf("%lld\n", r) ;
        }
     }
     return 0;
 }
