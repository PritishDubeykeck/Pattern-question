#include <bits/stdc++.h>
using namespace std;
void print12(int n)
{
    int space = 2*(n-1);
    for (int i = 1; i <= n; i++)
    {
        // Numbers
           for (int j = 1; j <=i; j++)
           {
            cout<<j<<" ";
           }
           
        // space
              for (int j=1;j<=space;j++)
              {
                cout<<" ";
              }
        // Numbers
        for (int j = i; j >=1; j--)
           {
            cout<<j<<" ";
           }
           cout<<endl;
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
        print12(n);
    }
}