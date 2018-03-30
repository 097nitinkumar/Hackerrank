#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int pickingNumbers(vector <int> a) 
{    
    int count=0;
    int maxcount;
    int position;
    int i;
    maxcount=1;
    while(maxcount>0)
    {
        for(i=0;i<a.size();i++)
        {
            count=0;
            for(int j=0;j<a.size();j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(abs(a[i]-a[j])<=1)
                { 
                    continue;
                }
                else 
                {
                    count++;
                }

            }
            
            if(!i)
            {
                maxcount=count;
                position=i;
            }
            else if(count>maxcount)
            {
                maxcount=count;
                position=i;
            }
        }
        if(count)
        {
            a.erase(a.begin()+position);
        }
    }

    return a.size();
}

int main() {
    int n;
    cin>>n;
    vector <int> a;
    int b;
    for (int a_i = 0; a_i < n; a_i++) 
    {
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    int result = pickingNumbers(a);
    cout<<result;
    return 0;
}

 
