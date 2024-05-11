#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while (t--)
    {
        string p;
        cin >> p;
        int len_p = p.length();
        sort(p.begin(), p.end());
        string h;
        cin >> h;
        bool flag = false;
        for (int i = 0; i < h.length() - len_p; i++)
        {
            string s = h.substr(i, len_p);
            sort(s.begin(), s.end());
            if (s == p)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}