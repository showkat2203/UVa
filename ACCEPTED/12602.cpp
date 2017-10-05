#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j,m,k,l,n,res;
    char A[1000];
    scanf("%d%*c",&j);
    while(j--){
        gets(A);
        m=((A[0]-'A')*26*26)+((A[1]-'A')*26)+((A[2]-'A'));
        n=((A[4]-'0')*1000)+((A[5]-'0')*100)+((A[6]-'0')*10)+((A[7]-'0'));
        res=abs(m-n);
        if(res<=100){
            printf("nice\n");
        }
        else {
            printf("not nice\n");
        }
    }
    return 0;

}
