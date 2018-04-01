#include <bits/stdc++.h>

using namespace std;
#define GCD(x,y) __gcd(x,y)
int getTotalX(vector <int> a, vector <int> b) {
    int count=0;
    int lcm;int hcf;
    if(a.size()==1)
    {
        lcm=a[0];
        //count--;
    }
    else
    lcm=a[0]*a[1]/GCD(a[0],a[1]);
    if(b.size()==1)
    {
        hcf=b[0];
        //count--;
    }
    hcf=GCD(b[0],b[1]);
    for(int i=2;i<a.size();i++)
        lcm=lcm*a[i]/GCD(lcm,a[i]);
    for(int i=2;i<b.size();i++)
        hcf=GCD(hcf,b[i]);

    for(int i=1;;i++)
    {
        if((hcf>=(lcm*i)))
        {
            if(hcf%(lcm*i)==0)
            {count++;}
            else continue;
        }
        else break;
    }
    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
