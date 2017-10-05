#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,l,n,s;
    char A[1000];
    scanf("%d",&j);
    getchar();
    for(n=1;n<=j;n++){
        gets(A);
        s=0;
        l=strlen(A);
        for(i=0;i<l;i++){
            if((A[i]=='a')||(A[i]=='d')||(A[i]=='g')||(A[i]=='j')||(A[i]=='m')||(A[i]=='p')||(A[i]=='t')||(A[i]=='w')||(A[i]==' ')){
                    s=s+1;
            }
            else if((A[i]=='b')||(A[i]=='e')||(A[i]=='h')||(A[i]=='k')||(A[i]=='n')||(A[i]=='q')||(A[i]=='u')||(A[i]=='x')){
                    s=s+2;
            }
            else if((A[i]=='c')||(A[i]=='f')||(A[i]=='i')||(A[i]=='l')||(A[i]=='o')||(A[i]=='r')||(A[i]=='v')||(A[i]=='y')){
                    s=s+3;
            }
            else if((A[i]=='s')||(A[i]=='z')){
                    s=s+4;
            }
        }
        printf("Case #%d: %d\n",n,s);

    }
    return 0;
}
