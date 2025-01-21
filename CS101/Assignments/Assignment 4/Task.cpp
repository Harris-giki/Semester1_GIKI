# include <iostream>
using namespace std;
int main()
{
      
   int n, i, b, c, m;
    cin >> n;
    int a[ n ];
    int z[ n + 1 ];
    b = a[ 0 ];
    c = a[ 0 ];

    for (i = 0; i < n; i++)
        cin >> a[ i ];
    for (i = 0; i < n; i++) {
        if (b < a[ i ])
            b = a[ i ];
    }
    for (i = 0; i < n; i++) {
        if (c < a[ i ] && a[ i ] != b)
            c = a[ i ];

        if (a[ i ] == b)
            m = i;
    }
    for (i = 0; i < m; i++) {
        z[ i ] = a[ i ];
    }
    for (i = m + 2; i < n + 1; i++) {
        z[ i ] = a[ i - 1 ];
    }
    z[ m ] = c;
    z[ m + 1 ] = b - c;
    for (i = 0; i < n + 1; i++)
        cout << z[ i ] << endl;
    return 0;
}
