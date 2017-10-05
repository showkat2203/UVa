#include<stdio.h>
int main()
{
    int i,j,n,A[100],k,cnt=0,m;
   while(scanf("%d",&n)==1){
        if(n==0){
            break;
        }
        cnt=0;
    for(k=0,m=1;k<100;k++){
        A[k]=n%2;
        n=n/2;
        if(A[k]==1){
            cnt++;
        }
        if(n==0){
            break;
        }
        else
            m++;
    }
        printf("The parity of ");
         for(k=m-1;k>=0;k--){
            printf("%d",A[k]);
         }
         printf(" is %d (mod 2).\n",cnt);
     }
    return 0;
}

