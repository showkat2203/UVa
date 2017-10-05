#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,j,i,l,m;
    char A[1000];
   while(gets(A)){

        b = 0;

        printf("%s",A);
        for(i=0,j=strlen(A)-1;i<j;i++,j--)
        {
            if(A[i]!=A[j]){
                b=1;
                break ;
            }
        }
        int f = 0,g=0;
        if(b==0)
        {
             printf(" -- is not a palindrome.\n");
             f=1;
        }
        else
        {
            f=1;
            printf(" -- is a regular palindrome.\n");
        }
        b = 0;
        for(i=0;i<strlen(A);i++)
        {
            if(A[i]=='E')
                A[i] = '3';
            else if(A[i]=='J')
                A[i] = 'L';
             else if(A[i]=='Z')
                A[i] = '5';
             else if(A[i]=='S')
                A[i] = '2';
        }
        if(f==0)
        {
                for(i=0,j=strlen(A)-1;i<j;i++,j--)
                {
                    if(A[i]!=A[j]){
                        b=1;
                        break ;
                    }
                }
                if(b==1)
                {
                    printf(" -- is a mirrored string.\n");
                    g = 1;
                }
                if(f==1&&g==1)
                    printf(" -- is a mirrored palindrome.\n");
        }


    }
    return 0;
}

