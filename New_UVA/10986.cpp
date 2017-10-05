#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

#define INF 100000001
#define MAX 101000


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


struct node
{
    int v, w ;
    node(){} ;
    node(int a, int b){v = a, w = b ;}
    bool operator < ( const node &t )const
    {
        return t.w < w ;
    }
};

vector < node > route[MAX] ;
int cost[MAX] ;


void dijkstra(int n)
{
    priority_queue < node > q ;
    cost[n] = 0 ;
    q.push(node(n,0)) ;
    node k, m ;
    int l, i, j ;
    while( !q.empty() )
    {
        k = q.top() , q.pop() ;
        if( cost[k.v] < k.w  )
            continue ;
        l = route[k.v].size() ;
        for( i = 0; i < l; i++ )
        {
            m = route[k.v][i] ;
            if( cost[m.v] > ( cost[k.v] + m.w ) )
            {
                cost[m.v] = cost[k.v] + m.w ;
                q.push(m) ;
            }
        }
    }
}

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int n, edge, strt, End, tst, m, i, ekhane, okhane, dis, cas = 0 ;
    scanf("%d", &tst) ;
    while( tst-- )
    {
        scanf("%d %d %d %d", &n, &m, &strt, &End ) ;
        for( i = 0; i < n; i++ )
        {
            cost[i] = INF ;
            route[i].clear() ;
        }
        while(m--)
        {
            scanf("%d %d %d", &ekhane, &okhane, &dis) ;
            route[ekhane].push_back(node(okhane, dis)) ;
            route[okhane].push_back(node(ekhane, dis)) ;
        }
        dijkstra(strt) ;
        printf("Case #%d: ", ++cas) ;
        if( cost[End] == INF )
            puts("unreachable") ;
        else
            printf("%d\n", cost[End]) ;
    }
    return 0 ;
}


