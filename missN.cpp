#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin >> x;
    int arr[x];
    int s = (x*(x+1)/2);
    int z=0;
    for(int i=1;i<x;++i)
    {
        cin >> arr[i];
    }
    for(int i=1;i<x;++i)
    {
        z+=arr[i];
    }
    int missN = s-z;
    cout << missN << endl;
    return 0;
}
