#include <bits/stdc++.h>
using namespace std;
void print19(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }
    iniS=8;
    for (int i = 1; i <=n; i++)
    {
        // Stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Space
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        print19(n);
    }
}