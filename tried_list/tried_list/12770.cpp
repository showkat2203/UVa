#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>

using namespace std;

int main()
{
    int a[100],b[100],i,j,k,l,tst;
    char A[1000];
    while(gets(A))
    {
        l = 0;
        if(A[0] == '#')
            break;
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        for(i=0;i<strlen(A); i++)
                a[A[i] - 'a']++;
        for(i=0;i<26;i++)
        {
            if( a[i] != 0 && a[i] % 2 != 0)
            {
                b[i]++;
                l++;
            }
        }
        for(i=0; i<26 ; i++)
        {
            if(l > 1 && b[i]!=0 )
            {
                printf("%c",i+97);
                l--;
            }

        }
        printf("\n");
    }
    return 0;
}


