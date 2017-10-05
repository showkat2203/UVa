#include<stdio.h>
#include<string.h>
int main()
{
    char  str[2000];
    int cnt = 0;

    while(gets(str)!=NULL){
        if ( str[0] == '*' ) break;

        printf ( "Case %d: ", ++cnt );
        if(str[0]=='H'){
            printf("Hajj-e-Akbar\n");
        }
        else if(str[0]=='U'){
           printf ("Hajj-e-Asghar\n");
        }

    }
    return 0;
}

