#include<bits/stdc++.h>

using namespace std ;

void make_parent(string a, strin b)
{

}

int main()
{
    int tst, f, m, n, i, j, k, cnt = 0 ;
    char a[30], b[30] ;
    string aa, bb ;
    scanf("%d", &tst) ;
    while(tst--)
    {
        scanf("%d", &n) ;
        map < string , int > mp ;
        cnt = 0 ;
        while(n--)
        {
            scanf("%s %s", a, b) ;
            aa = a , bb = b ;
            if( mp.find(aa) == mp.end() && mp.find(bb) == mp.end() )
            {
                mp[aa] = 1 , mp[bb] = 1;
                cnt += 2 ;
            }
            else if( mp.find(aa) != mp.end() && mp.find(bb) == mp.end() )
            {
                cnt++ ;
                mp[aa] = 1 , mp[bb] = 1;
            }
            else if( mp.find(aa) == mp.end() && mp.find(bb) != mp.end() )
            {
                cnt++ ;
                mp[aa] = 1 , mp[bb] = 1;
            }
            printf("%d\n", cnt) ;
        }
        mp.clear() ;
    }
    return 0 ;
}
