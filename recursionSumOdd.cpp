#include<bits/stdc++.h>
using namespace std;
int sumodd(int x)
{
    if (x==1) return 1;
    return (2*x-1)+sumodd(x-1);
}
int main()
{
    int x; cin >> x;
    cout << sumodd(x) << endl;
    return 0;
}
