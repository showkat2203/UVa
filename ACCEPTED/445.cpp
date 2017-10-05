#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    char A[1000];
    int i,j,k,l,m;
    while(gets(A))
    {
        int j = 0;
        for(i=0;i<strlen(A);i++)
        {
            if(A[i] == 'b')
            {
                for(k = 0;k<j;k++)
                {
                    printf(" ");
                }
                j = 0;
            }
            else if(A[i]=='!')
            {
                printf("\n");
            }

            else if(A[i] >= '0' && A[i] <= '9')
                j = j + (A[i] - '0');
           else
            {
                for(k = 0;k<j;k++)
                {
                    printf("%c",A[i]);
                }
                j = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
