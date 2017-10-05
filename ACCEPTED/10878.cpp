#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    char bin[100000],A[10000],output[10000];
    int i,j,k,l,m=0,n;
    //freopen("10878.txt","r",stdin);
    while(gets(A))
    {
        l = strlen(A);
        k=0;
        n = 0;
        for(i=0;i<l;i++)
        {
            if(A[i]=='o')
            {
                bin[k++] = '1';
            }
            else if(A[i]==' ')
            {
                bin[k++] = '0';
            }
        }
        bin[k] = '\0';
        for(i=0;i<k;i++)
        {
            n = n + pow(2,((k-1)-i))*(bin[i]-'0');

        }
        output[m++] = n;
        if(strcmp(A,"___________")==0){
            for(i=0;i<m-1;i++)
            {
                printf("%c",output[i]);
            }
            m=0;
        }
    }
    return 0;
}

