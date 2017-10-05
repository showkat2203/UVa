#include <bits/stdc++.h>


using namespace std;


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

int main()
{
//    freopen("in.txt", "r", stdin) ;
    int  i, j, k, n, a[50], res, f, kk ;
    map< int, vector < int > > mp, MAP ;
    map< int, vector < int > > :: iterator it ;
    while ( scanf("%d", &n) == 1 )
    {
        res = 0, f = 0 ;
        for( i = 0; i < n; i++ )
            scanf("%d", &a[i]) ;

        for( i = 0; i < n; i++ )
            for( j = 0; j < i; j++ )
                mp[a[i]].push_back(a[j]) ;

        for( i = 0; i < n; i++ )
            scanf("%d", &a[i]) ;

        for( i = 0; i < n; i++ )
            for( j = 0; j < i; j++ )
                MAP[a[i]].push_back(a[j]) ;
        for( it = mp.begin(); it != mp.end(); it++ )
        {
            k = mp[it->first].size() ;
            for(  i = 0; i < k; i++ )
            {
                f = 0 ;
                for( kk = 0; kk < MAP[it->first].size(); kk++ )
                {
                    if( mp[it->first][i] == MAP[it->first][kk] )
                    {
                        f = 1 ;
                        break ;
                    }
                }
                if( f == 0 )
                    res++ ;
            }
        }
        printf("%d\n", res) ;
        mp.clear(), MAP.clear() ;
    }
    return 0 ;
}

