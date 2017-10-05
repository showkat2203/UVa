#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

void input();

int main()
{
    input();
    return 0;
}

void input()
{
    long long z, i, l, m, a, cnt , res , A[10010], tst = 0 ;
    while( scanf("%lld %lld %lld %lld" , &z, &i, &m, &l) == 4 )
    {
        if( z==0 && i == 0 && m ==0 && l == 0 )
            break;
        cnt  = 0; tst ;
        memset(A, 0, sizeof A);
        a = l;
        while( true )
        {
            a = ( z*a + i ) ;
            a = a % m ;
            A[a]++;
            if(A[a] == 2)
                break;
            cnt ++;
        }
        printf("Case %lld: %lld\n",++tst, cnt );
    }
}
