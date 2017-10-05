#include <bits/stdc++.h>

using namespace std;

struct data
{
    char name[110] ;
    int d, m, year ;
};

bool cmp(const data &x, const data &y)
{
    if( x.year < y.year )
        return true;
    else if( x.year == y.year )
    {
        if( x.m < y.m )
            return true;
        else if( x.m == y.m )
        {
            if( x.d < y.d )
                return true;
            else if( x.d == y.d )
                return true;
            return false ;
        }
        return false ;
    }
    return false ;
}


int main()
{
    data a[110] ;
    int tst, i, j ;
    scanf("%d", &tst);
    for(i=0; i<tst; i++)
    {
        scanf("%s %d %d %d", a[i].name, &a[i].d, &a[i].m, &a[i].year);
    }
    sort( a, a + i, cmp );
    printf("%s\n%s\n", a[i-1].name, a[0].name);
    return 0;
}
