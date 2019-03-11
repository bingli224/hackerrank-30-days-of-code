#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for ( int idx = 1; idx <= 10; idx ++ ) {
        cout << n << " x " << idx << " = " << n * idx << endl;
    }
    
    return 0;
}
