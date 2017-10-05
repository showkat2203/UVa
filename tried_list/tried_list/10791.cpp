#include<stdio.h>
#include <iostream>
#include <sstream>
#include <string>

using namespace std ;

int gcd (int a,int b)
{
    if(b==0)
        return a;
    return gcd (b,a%b);
}

int lcm (int a, int b)
{
    return (a/gcd(a,b)*b);
}

int main()
{
    int T,N,ans,m,k,l,r;
    scanf("%d\n",&N);
    while(T--)
    {
        scanf("%d",&N);
        ans=1;
        m=1;
        for(int i = 1;i<N;i++)
        {
            k=0;
            l=0;
            for(int j = i+1;j<N;j++)
            {
                ans = (lcm(i,j));
                 if(ans>=m)
                {
                    m=ans;
                    r=i+j;
                }

            }
        }
            printf("%d\n",r);
    }
    return 0;
}



