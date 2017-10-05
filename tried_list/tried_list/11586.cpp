#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int tst, sum , i, sum2, l;
    char A[1000];
    scanf("%d",&tst);
    getchar();
    while(tst--)
    {
        gets(A);
        l = strlen(A);
        sum = 0; sum2 = 0;
        for(i=0;i<l; i++)
        {
            if(A[i] == 'F')
                sum++;
            else if(A[i] == 'M')
                sum2++;
        }
        if(sum == sum2 && l!=2 )
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
    return 0;
}
