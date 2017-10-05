#include<iostream>
#include<string>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int i,j,k,l,A[100000],cnt=0,m;
    scanf("%d",&k);
    while(k--)
    {
        scanf("%d",&j);
        for(i=0;i<j;i++)
        {
            scanf("%d",&A[i]);
        }
        l = abs(A[0]-A[1]);
        for(i=0;i<j-1;i++)
        {
            m = abs(A[i]-A[i+1]);
            if(l==m)
                l--;
            else if(m>l)
            {
                l = m ;
                m++;
            }

        }
        printf("Case %d: %d\n",++cnt,l);
    }
    return 0;
}
