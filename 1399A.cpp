#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int count = 0;
        for (int i = 1; i <= n - 1; i++)
        {
            if (a[i] - a[i - 1] > 1)
                count++;
        }
        if (count==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}