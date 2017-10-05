#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    long long a,b,i,j;
    scanf("%lld",&j);
    while(j--){
        scanf("%lld",&a);
        b = sqrt(a);
        printf("%lld\n\n",b);
    }
    return 0;
}
