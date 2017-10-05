#include <stdio.h>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    long long a,b,c,d,i,j,k,sum,l;
    char A[10000];
    while(gets(A)){
        l = strlen(A);
        sum=0;
        for(i=0;i<l;i++){
            a = A[i]-'0';
            b = a*(pow(2,l-i)-1);
            sum+=b;
        }
        if(sum==0)
            break;
        printf("%lld\n",sum);
    }
    return 0;
}
