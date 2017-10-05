#include<stdio.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>


using namespace std;


int main()
{
    long A[1000],i,j,k,l,c,n,N,d;
    while(scanf("%ld %ld",&n,&c)==2)
    {
        N=2;
        d=1;
        A[0]=1;
        while(N<=n)
        {
            k=0;
            for(i=2;i<=sqrt(N);i++)
            {
                if(N%i==0)
                {
                    k=1;
                    break;
                }
            }
            if(k==0)
            {
                A[d++]=N;
            }
            N++;
        }
        printf("%ld %ld:",n,c);
        if (d%2==0)
            c*=2;
        else
            c=(c*2)-1;
            k=(d-c)/2;
        if(d>=c){
            for(i=k;i<k+c;i++){
                printf(" %d",A[i]);
            }
        }
        else{
            for(i=0;i<d;i++){
                printf(" %d",A[i]);
            }
        }
        printf("\n\n");
    }
    return 0;
}
