#include<stdio.h>
#include<string.h>
int main()
{
    int a,c,d;
    char A[100];
    scanf("%d",&a);
    while(a--){
        scanf("%s",A);
        if(strlen(A)>3)
            printf("3\n");
        else if((A[0]=='o'&&A[2]=='e')||(A[1]=='n'&&A[2]=='e')||(A[0]=='o'&&A[1]=='n'))
            printf("1\n");
       else
            printf("2\n");
    }
    return 0;
}
