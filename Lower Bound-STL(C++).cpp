#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int size,a,b;
    vector <int> arr;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    sort(arr.begin(),arr.end());
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>a;
        cin>>b;
        vector<int>::iterator low,up;
        low=lower_bound (arr.begin(), arr.end(), a); //a is elemnt to be found
        up=upper_bound (v.begin(), v.end(), b);//b is element to be found
        cout << "upper_bound at position " << (up - v.begin()) << '\n';//for upper bound
        if(arr[low- arr.begin()]==a)
            cout << "Yes " << (low- arr.begin()+1) << '\n';//found
        else
            cout << "No " << (low- arr.begin()+1) << '\n';//Not found lowerest nearest location
        
        
    }
    return 0;
}
