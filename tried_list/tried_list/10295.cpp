#include <bits/stdc++.h>

using namespace std;

int n , m ,i, j, k , l , cost,sum = 0 ;

int main()
{
    map < string , int > M_p ;
    string str ;
    scanf("%d %d", &m, &n);
    while(m--)
    {
        cin >> str ;
        scanf("%d", &cost) ;
        M_p[str] = cost + 1 ;
    }
    while(n--)
    {
        sum = 0 ;
        while( cin >> str && str.compare(".")!=0 )
        {
            if( M_p[str] > 0 )
                sum+=M_p[str] - 1 ;
        }
        printf("%d\n", sum );
    }
    return 0;
}
