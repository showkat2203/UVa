#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
    long long  A[100010];

    int i, j, k, l, m, a, b, c, mini ,d , abso ;

    while(scanf("%d",&j)==1)
    {
        a=0;   b=0;  c=0;  mini = 1000010 , abso = 1000010;

        for(i=0;i<j;i++)
            scanf("%d",&A[i]);

        scanf("%d",&m);

        for(i=0;i<j-1;i++)
        {
            for(k=i+1;k<j;k++)
            {
                if( A[i]+A[k] == m )
                {
                    //abso = min(abs(a - b) , abso );
                    if( abs(A[i] - A[k] ) <= abso )
                    {
                        abso = abs(A[i]- A[k]);
                        if(A[i] < A[k])
                        {
                            c = A[i];
                            d = A[k];
                        }
                        else
                        {
                            c = A[k];
                            d = A[i];
                        }
                    }
                   // mini = min( mini, abs ( c - d ) );
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",c,d);
    }
    return 0;
}


