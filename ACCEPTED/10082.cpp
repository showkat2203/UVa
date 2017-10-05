#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdlib.h>

using namespace std;

int main()
{
    long i,j,k;
    char A[10000];
    while(gets(A))
    {
        for(i=0;i<strlen(A);i++)
        {
        if (A[i]=='1')
            printf("`");
        else if (A[i]=='2')
            printf("1");
        else if (A[i]=='3')
            printf("2");
        else if (A[i]=='4')
            printf("3");
        else if (A[i]=='5')
            printf("4");
        else if (A[i]=='6')
            printf("5");
        else if (A[i]=='7')
            printf("6");
        else if (A[i]=='8')
            printf("7");
        else if (A[i]=='9')
            printf("8");
        else if (A[i]=='0')
            printf("9");
        else if (A[i]=='-')
            printf("0");
        else if (A[i]=='=')
            printf("-");
        else if (A[i]=='W')
            printf("Q");
        else if (A[i]=='E')
            printf("W");
        else if (A[i]=='R')
            printf("E");
        else if (A[i]=='T')
            printf("R");
        else if (A[i]=='Y')
            printf("T");
        else if (A[i]=='U')
            printf("Y");
        else if (A[i]=='I')
            printf("U");
        else if (A[i]=='O')
            printf("I");
        else if (A[i]=='P')
            printf("O");
        else if (A[i]=='[')
            printf("P");
        else if (A[i]==']')
            printf("[");
        else if (A[i]=='\\')
            printf("]");
        else if (A[i]=='S')
            printf("A");
        else if (A[i]=='D')
            printf("S");
        else if (A[i]=='F')
            printf("D");
        else if (A[i]=='G')
            printf("F");
        else if (A[i]=='H')
            printf("G");
        else if (A[i]=='J')
            printf("H");
        else if (A[i]=='K')
            printf("J");
        else if (A[i]=='L')
            printf("K");
        else if (A[i]==';')
            printf("L");
        else if (A[i]=='\'')
            printf(";");
        else if (A[i]=='X')
            printf("Z");
        else if (A[i]=='C')
            printf("X");
        else if (A[i]=='V')
            printf("C");
        else if (A[i]=='B')
            printf("V");
        else if (A[i]=='N')
            printf("B");
        else if (A[i]=='M')
            printf("N");
        else if (A[i]==',')
            printf("M");
        else if (A[i]=='.')
            printf(",");
        else if (A[i]=='/')
            printf(".");
        else if (A[i]==' ')
            printf(" ");
        else if (A[i]=='\n')
            printf("\n");
        }
            printf("\n");
    }
    return 0;
}
