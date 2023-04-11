#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#define pb push_back
#define mp make_pair
#define ll long long
using namespace std;

int main()
{
    int i, j, k;
    int n, h, x;

    cin >> n >> h >> k;
    ll a[n];

    for (i = 0; i < n; i++)
        cin >> a[i];

    ll curH = h - a[0], t = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i] < curH)
            curH -= a[i];

        else
        {
            x = a[i] - curH;

            j = x / k;
            if (x % k == 0)
                t += (x / k);
            else
                t += (x / k + 1), j++;

            curH += (j * k);

            if (curH > h)
                curH = h;

            curH -= a[i];
        }
    }

    if (curH < h)
    {
        if ((h - curH) % k == 0)
            t += ((h - curH) / k);
        else
            t += ((h - curH) / k + 1);
    }

    cout << t;
    
    return 0;
}