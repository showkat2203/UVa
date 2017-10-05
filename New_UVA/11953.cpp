#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

#define INF 100000001
#define MAX 10100


//int rr[]= {-1,-1,0,0,1,1};
//int cc[]= {-1,0,-1,1,0,1};
int rr[]= {0,0,1,-1};/*4 side move*/
int cc[]= {-1,1,0,0};/*4 side move*/
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


int vis[110][110];
char a[110][110], n ;


void bfs(int r, int c)
{
    int m, i, j, k, l ;
    queue < int > q ;
    q.push(r), q.push(c) ;
    vis[r][c] = 1 ;
    while( !q.empty() )
    {
        m = q.front() , q.pop(), k = q.front(), q.pop() ;
        for( i = 0; i < 4; i++ )
        {
            l = m + rr[i], j = k + cc[i] ;
            if( l >= 0 && l < n && j >= 0 && j < n )
            {
                if( !vis[l][j] )
                {
                    if( a[l][j] == '@' || a[l][j] == 'x' )
                    {
                        q.push(l),q.push(j) ;
                        vis[l][j] = 1 ;
                    }
                }
            }
        }
    }

}

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int tst, i, j, dis = 0, cnt ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        scanf("%d", &n) ;
        getchar() ;
        for( i = 0; i < n; i++ )
            gets(a[i]) ;
        cnt = 0 ;
        memset(vis, 0, sizeof vis) ;
        for( i = 0; i < n; i++ )
        {
            for( j = 0; j < n; j++ )
            {
                if( a[i][j] == 'x')
                {
                    if( !vis[i][j] )
                    {
                        bfs(i, j) ;
                        cnt++ ;
                    }
                }
            }
        }
        printf("Case %d: %d\n", ++dis, cnt) ;
    }
    return 0 ;
}


