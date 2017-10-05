#include <bits/stdc++.h>

using namespace std;

int main()
{
    char str[20], str2[10] ;
    int a, b , i, j ,  tst, k ;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%s", str);
        sscanf( str, "%d%s", &a, str2);
        b = 0;
        for(k=0; k<strlen(str2); k++)
        {
            if(isdigit(str2[k]))
                b = b * 10 + (str2[k] - 48);
         }
        double result = (a * 0.5) + (b * 0.05);
        cout<<"Case "<<i<<": "<<result<<"\n";
    }
    return 0;
}
