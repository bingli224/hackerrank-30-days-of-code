#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   

    int T { };
    string S { };

    cin >> T;
    cin.ignore ( );
    for ( int idx = 0; idx < T; idx ++ ) {

        getline ( cin, S );

        char s2 [ S.size ( ) / 2 + 1 ];

        for ( int idxChg = 0; idxChg < S.size ( ); idxChg += 2 ) {
            cout << S [ idxChg ];
            s2 [ idxChg / 2 ] =
                ( idxChg + 1 < S.size ( ) ) ?
                S [ idxChg + 1 ] :
                0;
        }
        s2 [ sizeof ( s2 ) / sizeof ( s2 [ 0 ] ) - 1 ] = 0;
        if ( S.size ( ) > 1 )
            cout << " " << string ( s2 ) << endl;
        else
            cout << " " << endl;
    }

    return 0;
}
