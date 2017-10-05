#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
#include<vector>
#include<cstring>
#include<map>


using namespace std;

void input();


int main()
{
    input();
    return 0;
}

void input()
{
    int A[50000]  ;
    long long i , j, n, res ;
    while(scanf("%lld",&n) == 1 && n)
    {
        int f = 1;
        for(i=0; i<n; i++)
            scanf("%d",&A[i]);
        sort(A , A + i);
        for(i = 0; i < n - 1; i++)
        {
            j = abs( A[i] - A[i + 1]);
            if( j > 200 )
            {
                  f = 0;
                  break;
            }
        }
        res = ( 1422 - A[n - 1] ) * 2;
        if(f == 1 && res < 200)
            printf("POSSIBLE\n");
        else
            printf("IMPOSSIBLE\n");
    }
}


