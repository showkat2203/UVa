#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    char A[1000],B[1000],C[1000];
    int i,j,k,l,m,n,o,p;
    while(gets(A)){
        l =  strlen(A);
        o=l-1;
        p=0;
        for(i=0;i<l;o>=0,i++,o--){
            if(A[i]!=A[o]){
                p=1;
                break;
            }
        }
        if(p==0){
            printf("YEs\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
