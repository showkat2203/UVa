#include<cstdio>
#include <iostream>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
#include<vector>
#include<cstring>
#include<map>


using namespace std;

void input();


int main()
{
    input();
    return 0;
}

void input()
{
    int n, m ,res, tst, l, in , cnt = 0;
    char A[10010], tmp[10010] ;
    scanf("%d",&tst);
    getchar();
    while(tst--)
    {
        gets(A);
        l = strlen(A);
        if(cnt != 0)
            printf("\n");
            cnt++;
        printf("Message #%d\n",cnt);
        in = 0;
        memset(tmp, '\0', sizeof tmp);
        for(int i = 0; i<l;i++)
        {
            if(A[i] != ' ')
                tmp[in++] = A[i];
            if(A[i] == ' ' || A[i + 1] == '\0')
            {
                if(strcmp(tmp, ".-") == 0)
                    printf("A");
                else if(strcmp(tmp, "-...") == 0)
                    printf("B");
                else if(strcmp(tmp, "-.-.") == 0)
                    printf("C");
                else if(strcmp(tmp, "-..") == 0)
                    printf("D");
                else if(strcmp(tmp, ".") == 0)
                    printf("E");
                else if(strcmp(tmp,"..-." ) == 0)
                    printf("F");
                else if(strcmp(tmp,"--." ) == 0)
                    printf("G");
                else if(strcmp(tmp,"...." ) == 0)
                    printf("H");
                else if(strcmp(tmp,".." ) == 0)
                    printf("I");
                else if(strcmp(tmp,".---" ) == 0)
                    printf("J");
                else if(strcmp(tmp,"-.-" ) == 0)
                    printf("K");
                else if(strcmp(tmp,".-.." ) == 0)
                    printf("L");
                else if(strcmp(tmp,"--" ) == 0)
                    printf("M");
                else if(strcmp(tmp,"-." ) == 0)
                    printf("N");
                else if(strcmp(tmp,"---" ) == 0)
                    printf("O");
                else if(strcmp(tmp,".--." ) == 0)
                    printf("P");
                else if(strcmp(tmp,"--.-" ) == 0)
                    printf("Q");
                else if(strcmp(tmp,".-." ) == 0)
                    printf("-");
                else if(strcmp(tmp,"..." ) == 0)
                    printf("S");
                else if(strcmp(tmp,"-" ) == 0)
                    printf("T");
                else if(strcmp(tmp,"..-" ) == 0)
                    printf("U");
                else if(strcmp(tmp,"...-" ) == 0)
                    printf("V");
                else if(strcmp(tmp,".--" ) == 0)
                    printf("W");
                else if(strcmp(tmp,"-..-" ) == 0)
                    printf("X");
                else if(strcmp(tmp,"-.--" ) == 0)
                    printf("Y");
                else if(strcmp(tmp,"--.." ) == 0)
                    printf("Z");
                else if(strcmp(tmp,"-----" ) == 0)
                    printf("0");
                else if(strcmp(tmp,".----" ) == 0)
                    printf("1");
                else if(strcmp(tmp,"..---" ) == 0)
                    printf("2");
                else if(strcmp(tmp,"...--" ) == 0)
                    printf("3");
                else if(strcmp(tmp,"....-" ) == 0)
                    printf("4");
                else if(strcmp(tmp,"....." ) == 0)
                    printf("5");
                else if(strcmp(tmp,"-...." ) == 0)
                    printf("6");
                else if(strcmp(tmp,"--..." ) == 0)
                    printf("7");
                else if(strcmp(tmp,"---.." ) == 0)
                    printf("8");
                else if(strcmp(tmp,"----." ) == 0)
                    printf("9");
                else if(strcmp(tmp,".-.-.-" ) == 0)
                    printf(".");
                else if(strcmp(tmp,"--..--" ) == 0)
                    printf(",");
                else if(strcmp(tmp,"..--.." ) == 0)
                    printf("?");
                else if(strcmp(tmp,".----." ) == 0)
                    printf("'");
                else if(strcmp(tmp,"-.-.--" ) == 0)
                    printf("!");
                else if(strcmp(tmp,"-..-." ) == 0)
                    printf("/");
                else if(strcmp(tmp,"-.--." ) == 0)
                    printf("(");
                else if(strcmp(tmp,"-.--.-" ) == 0)
                   printf(")");
                else if(strcmp(tmp,".-..." ) == 0)
                    printf("&");
                else if(strcmp(tmp,"---..." ) == 0)
                    printf(":");
                else if(strcmp(tmp,"-.-.-." ) == 0)
                    printf(";");
                else if(strcmp(tmp,"-...-" ) == 0)
                    printf("=");
                else if(strcmp(tmp,".-.-." ) == 0)
                    printf("+");
                else if(strcmp(tmp,"-....-" ) == 0)
                    printf("-");
                else if(strcmp(tmp,"..--.-" ) == 0)
                    printf("_");
                else if(strcmp(tmp,".-..-." ) == 0)
                    printf("%c",char(34));
                else if(strcmp(tmp,".--.-." ) == 0)
                    printf("@");
                if(A[i+1] == ' ' )
                {
                    printf(" ");
                    i++;
                }
                in = 0;
                memset(tmp, '\0', sizeof tmp);
            }
        }
        printf("\n");
    }
}

