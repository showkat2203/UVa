#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l,A[1000],a,b,m;
    scanf("%d",&k);
    while(k--){
        int sum=0;
        scanf("%d",&l);
        for(i=0;i<l;i++){
            scanf("%d",&A[i]);
        }
        for(i=0;i<l;i++){
            for(j=0;j<l;j++){
                if(A[i]>A[j]){
                    a=A[j];
                    A[j]=A[i];
                    A[i]=a;
                }
            }
        }
        m=A[l/2];
        for(i=0;i<l;i++){
            sum=sum+abs(m-A[i]);
        }
        printf("%d\n",sum);
    }
    return 0;
}
