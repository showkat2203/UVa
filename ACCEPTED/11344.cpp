#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    long long i,j,k,l,a,b,c,n,B[2050];
    char A[100000];
    scanf("%lld",&j);
    while(j--)
    {
        scanf("%s %lld",A,&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&B[i]);
        }
        int f=0,g=0;
        l=strlen(A);
        for(k=0;k<n;k++)
        {
            a = 0;
            for(i=0;i<l;i++){
                a = a*10+(A[i]-'0');
                a = a%B[k];
            }
            if(a!=0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("%s - Wonderful.\n",A);
        else
            printf("%s - Simple.\n",A);
    }
    return 0;
}

