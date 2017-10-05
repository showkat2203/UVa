#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<queue>
#include <stack>
#include <string>
#include <cstring>
#include <map>

using namespace std;

struct data
{
    char a[110] ;
};

bool cmp(const data &x, const data &y)
{
    int l = strlen(x.a);
    int m = strlen(y.a);
    l = max(l,m);
    for(int i=0; i<l; i++)
    {
        if(x.a[i] < y.a[i])
            return true;
        else if(x.a[i] > y.a[i])
            return false;
    }
}

int main()
{
    data A[100];
    char str[110], B[110][10], C[110] ;
    int i = 0, k = 0, cnt, l,m ;
    while(scanf("%s", &str) && strcmp(str, "XXXXXX") != 0)
    {
        strcpy( A[i].a, str );
        i++;
    }
    sort(A, A + i, cmp);
    while(scanf("%s",str) && strcmp(str, "XXXXXX") != 0)   strcpy( B[k++], str );
    for(int j=0; j<k; j++)
    {
        cnt = 0;
        l = strlen(B[j]);
        sort(B[j] , B[j] + l );
        for(int d = 0; d<i; d++)
        {
            strcpy( C, A[d].a );
            m = strlen( C);
            sort(C, C + m );
            if(strcmp( B[j], C ) == 0)
            {
                printf("%s\n",A[d].a);
                cnt++;
            }
        }
       if(cnt == 0) printf("NOT A VALID WORD\n");
           printf("******\n");
    }
    return 0;
}
