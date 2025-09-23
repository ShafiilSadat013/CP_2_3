#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x; cin >> x;
    long long sum = 1;
    for(long long i=2;i*i<=x;++i)
    {
        if(x%i==0)
        {
            sum+=i;
            if(i!=(x/1))
            {
                sum+=(x/i);
            }
        }
    }
    if(sum==x) cout << "True" << endl;
    else cout << "False" << endl;
    return 0;
}
