#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>

#define Max 50000

using namespace std;

int A[50010] ;
queue < int > q;

void remai()
{
    int i, j, k ;
    A[1] = 1;
    A[2] = 2;
    for(i = 3; i<= Max ; i++)
    {
        for(j=1; j<=i; j++)
            q.push(j);
        while( q.size() > 1 )
        {
            q.pop();
            k = q.front();
            q.pop();
            q.push(k);
        }
        A[i] = q.front();
       // printf("%d\n", q.front());
        q.pop();
    }
}

int main()
{
    remai() ;
    int n ;
    while(scanf("%d",&n)==1 && n)
    {
        printf("%d\n",A[n]);
    }
    return 0;
}
