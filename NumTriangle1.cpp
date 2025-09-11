#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int n=1;
    for(int i=1;i<=x;++i)
    {
        for(int j=1;j<=i;j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;;
    }
    return 0;
}
