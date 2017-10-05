#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int t, i, f, tr , l;
    char a[500] ;
    stack <char> dukao ;
    scanf("%d",&t);
    getchar();
    while(t--)
    {

        gets(a);
        l = strlen(a);
        f = 0;
        if(strcmp(a,"\n") == 0)
        {
            printf("Yes\n");
            continue;
        }
        if( l == 1 )
        {
            printf ("No\n");
            continue;
        }

        for(i=0;i<l; i++)
        {
            if( a[i]=='('|| a[i]=='[')
                dukao.push(a[i]);
            else if( a[i] == ')' && !dukao.empty() && dukao.top()=='(')
                dukao.pop();
            else if( a[i]==']' && !dukao.empty() && dukao.top()=='[')
                dukao.pop();
            else if(a[i] == ' ')
                tr = 1;
            else
                f=1;
        }
        if( f == 0 && dukao.empty() )
            printf("Yes\n");
        else
            printf("No\n");
        while( !dukao.empty() )
            dukao.pop();
    }
    return 0;
}
