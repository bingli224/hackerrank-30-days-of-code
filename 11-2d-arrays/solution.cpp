#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int max = -9 * 7;
    int sz = arr.size ( ) - 2;

    int idxX = 0;
    int idxY;
    while ( idxX < sz ) {
        idxY = 0;
        while ( idxY < sz ) {
            int sum = arr [ idxX ] [ idxY ] + arr [ idxX ] [ idxY + 1 ] + arr [ idxX ] [ idxY + 2 ] + arr [ idxX + 1 ] [ idxY + 1 ] + arr [ idxX + 2 ] [ idxY ] + arr [ idxX + 2 ] [ idxY + 1 ] + arr [ idxX + 2 ] [ idxY + 2 ];
//cout << "arr[" << idxX << "][" << idxY << "]=" << arr [idxX][idxY] << " sum=" << sum << endl;
            if ( sum > max )
                max = sum;

            idxY ++;
        }

        idxX ++;
    }

    cout << max << endl;

    return 0;
}
