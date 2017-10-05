#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char A[1000010];
    long long i,j,k,l,t,n,m,cnt=0,s;
    while(scanf("%s",&A)==1){
        l=strlen(A);
        if(l==0){
            break;
        }
        scanf("%lld",&k);
        for(n=0;n<k;n++){
            scanf("%lld %lld",&i,&j);
            m=0;
            if(n==0){
                printf("Case %lld:\n",++cnt);
            }
            if(i>j){
                t=i;
                i=j;
                j=t;
            }
            for(s=i;s<j;s++){
                if(A[s]!=A[s+1]){
                    printf("No\n");
                    m=1;
                    break;
                }
            }
            if(m==0){
                printf("Yes\n");
            }
        }
    }
    return 0;
}
