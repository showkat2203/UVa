#include<cstdio>
#include<cmath>
#include<algorithm>


using namespace std;

long long i,j,k,a,b,n;

int main()
{
    //freopen("10880.txt", "r", stdin);
    //freopen("10880_output.txt", "w", stdout);
    long long p,l,q,r;
    long long A[50010],B[50010];
    scanf("%lld",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%lld %lld",&p,&l);
        if( p == l )
        {
            printf("Case #%lld: 0\n",i);
            continue ;
        }
        int flag = 0;
        q = p - l;
        b = 0;
        for(k = 1 ;k<= sqrt(q); k++)
        {
            if(q % k == 0)
            {
                if(q / k != k)
                {
                    A[b++] = k;
                    A[b++] = q/k;
                }
                else
                    A[b++] = k;
            }
        }
        sort(A,A+b);
        int c = 0;
            for(r=0;r<b;r++)
            {
                if(A[r]>l)
                {
                   B[c++] = A[r];
                }
            }
        if(c == 0 )
            printf("Case #%lld:\n",i);
        else
        {
            printf("Case #%lld:",i);
            for(r=0;r<c;r++)
            {
                printf(" %lld",B[r]);
            }
            printf("\n");
        }

    }
    return 0;
}

