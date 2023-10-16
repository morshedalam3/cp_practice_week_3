#include<bits/stdc++.h>
using namespace std;
int a[2][2];

void rotate90Clockwise(int a[2][2])
{

    for (int i = 0; i < 2 / 2; i++)
    {
        for (int j = i; j < 2 - i - 1; j++)
        {

            int temp = a[i][j];
            a[i][j] = a[2 - 1 - j][i];
            a[2 - 1 - j][i] = a[2 - 1 - i][2 - 1 - j];
            a[2 - 1 - i][2 - 1 - j] = a[j][2 - 1 - i];
            a[j][2 - 1 - i] = temp;
        }
    }
}
int main(){
      
    int t;
    cin >> t;
    while (t--)
    {
        int n;

        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                cin >> a[i][j];
            }
        }
        bool ok = false;
        for (int i = 0; i < 4; ++i)
        {
            if (a[0][0] < a[0][1] and a[0][0] < a[1][0] and a[1][0] < a[1][1] and a[0][1] < a[1][1])
            {
                ok = true;
            }
            rotate90Clockwise(a);
        }

        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}