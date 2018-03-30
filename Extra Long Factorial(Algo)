#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void extraLongFactorials(int n) {
    vector <int> string(200,0);//Find factorial upto 200 digits
    int rem,temp;
    //initilisation
    string[0]=1;
    //////while n is not yet zero
    while(n)
    {
        //multiplication of each digit with n
        for(int j=0;j<200;j++)
        {
            if(string[j]!=0)
            string[j]*=n;
        }
        //just letting qth element to just store 1 digit
        for(int p=0;p<200;p++)
        {
            if(string[p]==0)continue;
            else
            {
                //shifting all noe one's place's digit to next digit place and adding them to it's existing value
                temp=string[p];
                rem=string[p]%10;
                string[p]=rem;
                string[p+1]+=temp/10;
            }
        }
        n--;
    }
    //displaying
    int flag=0;
    for(int k=199;k>=0;k--)
    {
        if((string[k]!=0)&&!flag)flag=1;
        if(flag)cout<<string[k];
    }
}

int main() {
    int n;
    cin>>n;
    extraLongFactorials(n);
    return 0;
}
