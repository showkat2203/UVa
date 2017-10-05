#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    freopen("12503.txt","r",stdin);
    int tst,  i, j , k, res, b;
    char a[100][100], A[110], tt[110];
    scanf("%d",&tst);
    getchar();
    i = 0;
    while(tst--)
    {
        scanf("%d",&j);
        res = 0;
        i = 0;
        getchar();
        while(j--)
        {
            scanf("%s",a[i]);
            if(a[i][0] == 'L')
                res--;
            else if(a[i][0] == 'R')
                res++;
            else
            {
                scanf("%s %d",A,&b);
                strcpy( a[i], a[b - 1] );
                if( a[b - 1][0] == 'L' )
                    res--;
                else
                    res++;
            }
                i++;
        }
        //printf("iiiiiiii      %d\n",i);
        printf("%d\n",res);
    }
    return 0;
}

