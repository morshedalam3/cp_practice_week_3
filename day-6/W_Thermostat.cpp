#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x, a, b;
        cin >> l >> r >> x >> a >> b;

        if (a == b)
            cout << 0 << endl;
        else if (abs(a - b) >= x)
            cout << 1 << endl;
        else if (abs(l - a) >= x && abs(l - b) >= x)
            cout << 2 << endl;
        else if (abs(r - a) >= x && abs(r - b) >= x)
            cout << 2 << endl;
        else if (abs(l - a) >= x && abs(r - b) >= x)
            cout << 3 << endl;
        else if (abs(r - a) >= x && abs(l - b) >= x)
            cout << 3 << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}