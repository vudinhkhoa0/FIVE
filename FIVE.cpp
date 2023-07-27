#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum = 0, dem = 1;
    for (int i = 1; i <= 5; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            dem *= 10;
            sum += i*dem;
        }
    }
    cout << sum / 10;
    return 0;
}
