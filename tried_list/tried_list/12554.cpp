#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<cstdlib>

using namespace std;

int main()
{
//    freopen("12554.txt","w", stdout);
    char A[16][16] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to","you"};
    char a[100][100];
    int i, j, k, l, m, n;
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++) gets(a[i]);
    l = n / 16;
    m = n % 16;
    if(m !=0) l++;
    k = 0;
    for(j=1; j<=l; j++)
    {
        for(i=0; i<16; i++)
        {
            printf("%s: %s\n",a[k], A[i] );
            k++;
            if( k == n ) k = 0;
        }
    }
    return 0;
}


