#include <bits/stdc++.h>

typedef long long ll ;

using namespace std;

ll sum = 0, cnt = 0 ;
int n, i, tst, p, q, m  ;

void call(int H,int C )
{
    if( H == C )
    {
        ++cnt;
        return ;
    }
    sum = sum * 10 + 1 ;
    call( H + 1, C ) ;
    sum /= 10 ;
    sum = sum * 10 + 2 ;
    call(H + 1, C ) ;
    sum/= 10 ;
}


int main()
{
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d %d", &n, &m) ;
        {
            m = pow(2, m);
            call(0, n);
            printf("%d\n", cnt);
        }
    }
    return 0 ;
}

