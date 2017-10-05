#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>

using namespace std;

int main()
{
    int n, i, j, k, m;
    int A[100];
    queue < int > q;
    while(scanf("%d",&n)==1 && n)
    {
        for(i=1; i<=n; i++)
            q.push(i);
        j = 0;
        printf("Discarded cards:");
        while( q.size() >1 )
        {
            A[j++] = q.front();
            q.pop();
            k = q.front();
            q.pop();
            q.push(k);
        }
        for(i=0; i<j ; i++)
        {
            if(i == j - 1)
            {
                printf(" %d",A[i]);
            }
            else
                printf(" %d,",A[i]);
        }
        printf("\n");
        printf("Remaining card: %d\n", q.front());
        q.pop();
    }

    return 0;
}
