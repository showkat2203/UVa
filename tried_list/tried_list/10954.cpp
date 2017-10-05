#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a, i, j, ma, res = 0, n, sum, s ;
    priority_queue < int > q ;
    while(scanf("%d", &n) && n)
    {
        res = 0, ma = 0 , sum = 0, s = 0 ;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a);
            q.push(-a);
        }
        while( q.size() != 1 )
        {
            res =  ( q.top() * ( - 1 ) );
            q.pop();
            ma =  ( q.top() * ( - 1 ) ) ;
            q.pop();
            sum = ma + res ;
            s = s + sum ;
            q.push(-sum);
        }
        printf("%d\n", s);
        while( !q.empty() )
            q.pop();
    }
    return 0;
}

