#include <bits/stdc++.h>

using namespace std;

int main()
{
    map < string, string > m_map ;
    string A, B, C;
    int i, j, k, m, n, l;
    while( scanf("%d %d",&j, &n) == 2 )
    {
        getchar();
        while( j-- )
        {
            cin >> A ;
            cin >> B ;
            m_map[A] = B ;
        }
        while(n--)
        {
            cin >> C ;
            if( m_map[C] != "" )
            {
                cout << m_map[C] << endl ;
            }
            else
            {
                l = C.length() ;
                if( C[l-1] == 'y' && ( (C[l-2] != 'a') && ( C[l-2] != 'e') && (C[l-2] != 'i') && (C[l-2] != 'o') && (C[l-2] != 'u')) )
                {
                    for( i = 0; i<l - 1; i++)
                    {
                        printf("%c", C[i]) ;
                    }
                    puts("ies") ;
                }
                else if( C[l-1] == 'o' || C[l-1] == 's' || C[l-1] == 'x' || ( C[l-1] == 'h' && C[l-2] == 'c') || (( C[l-1] == 'h' && C[l-2] == 's')) )
                {
                    cout << C << "es" << endl ;
                }
                else
                    cout << C << "s" << endl ;
            }
        }
        m_map.clear() ;
    }
    return 0;
}
