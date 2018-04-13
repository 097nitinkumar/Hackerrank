#include <bits/stdc++.h>

using namespace std;

#define VI vector <int>
#define ull unsigned long long
int primeCount(ull n) {
    VI lookup_t ={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71};
    int count=0;
    ull num=1;
    for(int i=0;i<lookup_t.size();i++)
    {
        num*=lookup_t[i];
        if(num>n)
        {
            count=i;
            break;
        }
    }
    return count;

}

int main()
{
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) {
        ull n;
        cin >> n;
        int result = primeCount(n);
        cout << result << "\n";
    }
    return 0;
}
