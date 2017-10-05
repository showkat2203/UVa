#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int A[100000];
    int i,j,k,l,m,a,b,c,mini;
    while(scanf("%d",&j)==1){
            a=0;
            b=0;
            c=0;
            mini=0;
        for(i=0;i<j;i++){
            scanf("%d",&A[i]);
        }
        scanf("%d",&m);
        for(i=0;i<j-1;i++){
            for(k=i+1;k<j;k++){
                if(A[i]+A[k]==m){
                    if(A[i]>A[k]){
                        c=A[i]-A[k];
                        a=A[k];
                        b=A[i];
                    }
                    else
                    {
                        c=A[k]-A[i];
                        a=A[i];
                        b=A[k];
                    }
                    if(mini==0){
                        mini=c;
                    }
                    else if(c<=mini)
                    {
                        mini=c;
                    }
            }
        }
     }
    printf("Peter should buy books whose prices are %d and %d.\n",a,b);
 }
    return 0;
}

