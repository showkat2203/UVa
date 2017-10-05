#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <cctype>
#include <string>
#include <iostream>
#include <sstream>

#define M 100000

bool prime[M];
int seev[M];

using namespace std;

void input()
{
    for(int i=2; i<=sqrt(M); i++)
    {
        if(seev[i] == false )
        {
            for(int j = 2*i ; j<=M; j+=i )
                seev[j] = true;
        }
    }

    seev[0] = seev[1] = true;

}

int main()
{
    input();
    char str[500];
    int i, j , k, n, m, maxi, a[M], l , num ;
    while(scanf("%s",str))
    {
        if( strcmp (str, "0") == 0)
            break;
        l = strlen(str);
        for(i=0; i<l; i++) a[i] = str[i] - '0';
        maxi = 0;
        for(i=0; i<l; i++)
        {
            num = 0;
            for(j=i; j<l; j++)
            {
                num = num * 10 + a[j];
                if( num > M )
                    break;
                if( seev[num] == false )
                {
                    if( num > maxi )
                        maxi = num ;
                }
            }
        }
        printf("%d\n",maxi);
    }
    return 0;
}
