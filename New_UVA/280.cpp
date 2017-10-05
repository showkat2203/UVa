#include <bits/stdc++.h>


using namespace std;


//int rr[]= {-1,-1,0,0,1,1};
//int cc[]= {-1,0,-1,1,0,1};
//int rr[]= {0,0,1,-1};/*4 side move*/
//int cc[]= {-1,1,0,0};/*4 side move*/
//int rr[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int cc[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int rr[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int cc[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

//template< class T > T _abs(T n) { return (n < 0 ? -n : n); }
//template< class T > T _max(T a, T b) { return (!(a < b) ? a : b); }
//template< class T > T _min(T a, T b) { return (a < b ? a : b); }
//template< class T > T sq(T x) { return x * x; }
//template< class T > T gcd(T a, T b) { return (b != 0 ? gcd<T>(b, a%b) : a); }
//template< class T > T lcm(T a, T b) { return (a / gcd<T>(a, b) * b); }
//template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }
//
//#define Maxi 100000005
//#define sq sqrt(Maxi)
//
//
//typedef long long ll ;
//
//bool yes_no[Maxi] ;
//int prime[6 * 1000000], sz = 0 ;
//
//void seive()
//{
//    int i, j ;
//    yes_no[0] = yes_no[1] = true ;
//    yes_no[2] = false ;
//    prime[sz++] = 2 ;
//    for( i = 4; i <= Maxi; i+= 2)
//        yes_no[i] = true ;
//    for( i = 3; i <= sq; i += 2 )
//        if( yes_no[i] == false )
//            for( j = i * i ; j <= Maxi; j += ( 2 * i ) )
//                yes_no[j] = true ;
//
//    for( i = 3; i <= Maxi; i += 2 )
//        if( yes_no[i] == false )
//       // cout << sz << endl;
//            prime[sz++] = i ;
////    for( i = 0; i < 20; i++ )
////        printf("%d\n", prime[i]) ;
//}



map < int, vector < int > > mp ;
map < int, vector < int > > :: iterator it ;

int vis[110] ;

void bfs(int n)
{
    queue < int > q ;
    memset(vis, 0, sizeof vis) ;
    int m, l, i, j, k ;
    q.push(n) ;
    while ( !q.empty() )
    {
        m = q.front(), q.pop() ;
        k = mp[m].size() ;
        for( i = 0; i < k; i++ )
        {
            if( !vis[mp[m][i]] )
            {
                vis[mp[m][i]] = 1 ;
                q.push(mp[m][i]) ;
            }
        }
    }
}

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int jaowa_jai, road, n, node, kotha_theke_jabo, tst, i, cnt ;
    while( scanf("%d", &node) == 1 && node != 0 )
    {
        while( scanf("%d", &jaowa_jai) == 1 && jaowa_jai != 0 )
        {
             while( scanf("%d", &road) == 1 && road != 0 )
             {
                mp[jaowa_jai].push_back(road) ;
             }
        }
        scanf("%d", &tst) ;
        while( tst-- )
        {
            scanf("%d", &kotha_theke_jabo) ;
            bfs(kotha_theke_jabo) ;
            cnt = 0 ;
            for( i = 1; i <= node; i++ )
                if( !vis[i] )  cnt++ ;
            printf("%d", cnt) ;
            for( i = 1; i <= node; i++ )
                if( !vis[i] )
                    printf(" %d", i) ;
            puts("") ;
        }
        mp.clear() ;
    }
    return 0 ;
}

