#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a[110], b[110], com ;
    int n , m , i , j, k, l;
    while ( scanf("%d", &n) == 1)
    {
        i = 0 ;
        getchar();
        while(n--)
        {
            getline(cin, a[i]);
            getline(cin, b[i]);
            i++;
        }
        scanf("%d", &m);
        getchar();
        while(m--)
        {
            getline(cin, com );
            for(k=0; k<i; k++)
            {
                if( a[k] == com )
                {
                    cout << b[k] << endl ;
                    break;
                }
            }
        }
    }
 return 0;
}

