#include<stdio.h>
#include<math.h>


int main()
{
    int i,j,n,sum=0;
    int A[105][105];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<=sqrt(n);i++){
        for(j=0;j<=sqrt(n);j++){
            sum=sum+A[i+1][j];
        }
    }
    printf("%d\n",sum);
    return 0;
}

