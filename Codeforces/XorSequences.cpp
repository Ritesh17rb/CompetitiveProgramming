Xor Sequences : https : // codeforces.com/problemset/problem/1979/B
                   Approach : So approach was simple : 
                   Suppose a^(x)=b^(y)
                        a^(x+1)=b^(y+1)
                        a^(x+2)=b^(y+2) and so on.
                        So i can find number x and y 
                        57-> 1 110 01
                        37-> 1 001 01  for which the unsame bit becomes
                        same, but how many consecutive i will be able
                        to make that depends on how many same bits i already have.

#include <bits/stdc++.h>
#define fast_io                   \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
                                                       using namespace std;

int main()
{
    fast_io;
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        int num = x ^ y;
        for (int i = 0; i < 31; i++)
        {
            if ((num & (1 << i)) != 0)
            {
                cout << (1 << i) << endl;
                break;
            }
        }
    }
    return 0;
}