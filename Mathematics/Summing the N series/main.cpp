#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007
#define ull unsigned long long
ull summingSeries(ull n) {
    return ((n%MOD)*(n%MOD))%MOD;
}

int main()
{
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        ull n;
        cin >> n;
        ull result = summingSeries(n);
        cout << result << "\n";
    }
    return 0;
}
