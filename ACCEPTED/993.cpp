#include<stdio.h>
#include<cstring>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
 {
     long long a,b,c,d,i,j,k,n,A[1000];
     scanf("%lld",&j);
     while(j--){
        scanf("%lld",&n);
        a=n;
        if(n<10)
        {
            printf("%lld\n",n);
        }
        else {
            d=9;
            i=0;
            while(d>1)
            {
                while(n%d==0)
                {
                    n=n/d;
                    A[i++]=d;
                }
                d--;
            }
            sort(A,A+i);
            if(n==1)
            {
                for(b=0;b<i;b++)
                {
                    printf("%lld",A[b]);
                }
                printf("\n");
            }
            else
                printf("-1\n");
        }
    }
     return 0;
 }




