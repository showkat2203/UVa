#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    char A[100005], *tok ;
    int i,j,k, a[100005];
    while(gets(A))
    {
        i = 0;
        tok = strtok(A," ");
        while(tok != NULL)
        {
            //puts(tok);
            a[i++] = atoi(tok);
            tok = strtok(NULL, " ");
        }
        int sum = 0 , n = 0, j = 0 , m;
        for(k = 0; k < i ; k++)
        {
            if(a[k] < A[k+1])
            {
                sum +=A[i] + A[i+1];
            }
            else
            {
                sum = 0;
            }
        }
        printf("%d\n",n);
    }
    return 0;
}
