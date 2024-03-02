#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    char a[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    int number = 0;
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == '.')
                count++;
            if (a[i + 1][j] == '.')
                count++;
            if (a[i][j + 1] == '.')
                count++;
            if (a[i + 1][j + 1] == '.')
                count++;
        }
        if (count == 1 || count == 0)
            number++;
    }
    if (number)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}