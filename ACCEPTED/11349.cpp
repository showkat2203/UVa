#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long A[100][100];
    long long a,b,i,j,k,l=0,cnt=0;
    int n;
    char c[10];
    scanf("%d",&n);
    while(n--){
        getchar();
        scanf("%c = %lld",&c[0],&k);
        int g = 0 , f = 0;
        for(i=0;i<k;i++){
                for(j=0;j<k;j++){
                    scanf("%lld",&A[i][j]);
            }
        }
        for(i=0;i<k;i++){
                for(j=0;j<k;j++){
                   if(A[i][j]!=A[k-i-1][k-j-1]||A[k-i-1][k-j-1]<0||A[i][j]<0){
                        g = 1;
                        break;
                   }
            }
        }
        if(g==1){
            printf("Test #%d: Non-symmetric.\n",++cnt);
        }
        else {
            printf("Test #%d: Symmetric.\n",++cnt);
        }
    }
    return 0;
}
