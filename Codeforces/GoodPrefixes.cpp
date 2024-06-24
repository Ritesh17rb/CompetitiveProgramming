C. Good Prefixes

Alex thinks some array is good if there exists some element that can be represented as the sum of all other elements (the sum of all other elements is 0
 if there are no other elements). For example, the array [1,6,3,2]
 is good since 1+3+2=6
. Furthermore, the array [0]
 is also good. However, the arrays [1,2,3,4]
 and [1]
 are not good.

Alex has an array a1,a2,…,an
Help him count the number of good non-empty prefixes of the array a

Approach: So in this problem we needed to find about the number of good prefixes,One
key point that i was missing in the question was it was asking for the prefixes, and mistook
it for two pointers.But here my starting point will  be fixed always.
Now  i calculated the prefix sum.And while iterating i maintained a max variable and whenever,
upon subtracting my maxi from the prefix sum equals to my maxi .That adds to my ans.That is a valid prefix:

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> prefix(n, 0);
        cin >> v[0];
        prefix[0] = v[0];
        ll maxi = v[0];
        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
            prefix[i] = v[i] + prefix[i - 1];
        }
        ll cnt = 0;
        ll i = 0;
        while (i < n)
        {
            maxi = max(maxi, v[i]);
            if (prefix[i] - maxi == maxi)
                cnt++;

            // if (prefix[i] - v[i] == v[i])
            //   cnt++;
            // else if (v[i] == 0)
            //   cnt++;
            i++;
        }
        cout << cnt << endl;
    }
}

// 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 294967296