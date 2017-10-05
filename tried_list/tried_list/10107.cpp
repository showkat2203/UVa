#include<cstdio>
#include<cmath>
#include<cstring>
#include<set>
#include<vector>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main()
{
    int A[10010],i,j,k=0,l,n;
    while(scanf("%d",&n)==1&&n)
    {
        A[k++] = n;
        sort(A,A+k);
        if(k%2==0)
            printf("%d\n",(A[k/2]+A[k/2-1])/2);
        else
            printf("%d\n",A[k/2]);
    }
    return 0;
}

