#include <bits/stdc++.h>

using namespace std;

map <string , string > M ;
int i, j, k, l ;
char a[110], b[110], c[110] ;
int main()
{
    while(gets(c))
    {
        if(c[0] == '\0')
            break;
        sscanf(c, "%s %s", a, b);
        M[b] = a;
    }
    while(gets(c))
    {
        if( c[0] == '\0')
            break;
        if( M[c] == "\0" )
            puts("eh");
        else
            printf("%s\n", M[c].c_str());
    }
    return 0;
}


