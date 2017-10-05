#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i, j, k, l, cnt = 0;
    char A[50];
    long long b[30], sum = 1, a[30];
    for(i = 1; i<=21; i++)
    {
        sum = sum * i;
        a[i] = sum;
    }
    scanf("%d",&k);
    getchar();
    while(k--)
    {
        scanf("%s",A);
        memset(b,0,sizeof b);
        l=strlen(A);
        for(i=0; i<l; i++)
        {
            b[A[i] - 'A']++;
        }
        sum = 1;
        for(i=0; i<26; i++)
        {
            if(b[i] > 1)
            sum = sum * a[b[i]];
        }
        printf("Data set %d: %lld\n",++cnt,a[l] / sum );
    }
    return 0;
}
