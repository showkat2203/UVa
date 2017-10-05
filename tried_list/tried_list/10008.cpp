#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;


int main()
{
    int i,j,a[250],tst,s,t,b,res;
    char A[550];
    scanf("%d",&tst);
    getchar();
    memset(a,0,sizeof a);
    while(tst--)
    {
        gets(A);
        for(i=0;i<strlen(A);i++)
        {
            if(A[i]>='a' && A[i]<='z')
                A[i] = A[i] - 32;
        }

        for(i=0;i<strlen(A);i++)
        {
            a[A[i]]++;
        }
    }
        res = a[65];
        for(i=65;i<=90;i++)
        {
            for(s=65;s<=90;s++)
            {
                if(res < a[s])
                {
                    res = a[s];
                    b = s;
                }
            }
            a[b] = 0;
            if(res)
                printf("%c %d\n",b,res);
            res = 0;
        }
    return 0;
}
