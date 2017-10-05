#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char A[10000],B[10000];
    long long int i,j,k,l,a,b,c;
    while(scanf("%s %s",A,B)==2){
        a=0;
        l=strlen(A);
        k=strlen(B);
        for(i=0;i<l;i++){
            a=a*10+(A[i]-'0');
        }
        printf("%lld\n",a);
    }
    return 0;
}
