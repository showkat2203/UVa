#include <bits/stdc++.h>

using namespace std;

string khai, jake_khai ;

map < string , int > mp;

map <int, int> ans;

int par[5050] ;

void make_par(int n)
{
    int i ;
    for( i = 0; i <= n; i++)
        par[i] = i ;
}

int find_representative(int r )
{
    if( par[r] == r )
        return r ;
    return par[r] = find_representative(par[r]) ;
}

int union_set(int q1, int q2)
{
    int u = find_representative(q1) ;
    int v = find_representative(q2) ;
    if( u != v )
    {
        par[u] = v ;
        ans[ v ] = ans[ u ] + ans[ v ];
        ans[ u ] = ans[ v ];
    }
}

int main()
{
//    freopen("in.txt", "r", stdin);
    int n, m, cnt, i, j, k, num;
    while(scanf("%d %d", &n, &m) == 2)
    {
        if( n == 0 &&  m == 0 )
            break ;
        ans.clear();
        cnt = 0 ;
        num = 0 ;
        for( i = 0; i < n; i++ )
        {
            cin >> khai ;
            mp[khai] = ++num ;
            ans[ num ] = 1;
        }
        make_par(num) ;
        while(m--)
        {
            cin >> khai >> jake_khai ;
            k = union_set(mp[khai], mp[jake_khai]) ;
        }

        int res = 0;
        for( map < int, int > :: iterator itt = ans.begin(); itt != ans.end(); itt++ )
                res = max(res, itt->second);

        printf("%d\n", res);
    }
    return 0;
}
