#include <bits/stdc++.h>

using namespace std;

int main() {
    vector< vector<int> > s(3,vector<int>(3));
    int magic_mat[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},//first magic square
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},//second magic square
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},//third magic square
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},//fourth magic square
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},//fifth magic square 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},//sixth magic square
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},//seventh magic square 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},//eight magic square
};
    for(int s_i = 0;s_i < 3;s_i++)
    {
       for(int s_j = 0;s_j < 3;s_j++)
       {
          cin >> s[s_i][s_j];
       }
    }
    int min_count=0,count;
    for(int i=0;i<8;i++)
    {
        count=0;
        for(int s_i = 0;s_i < 3;s_i++)
        {
            int sum=0;
            for(int s_j = 0;s_j < 3;s_j++)
            {
                count+=abs(s[s_i][s_j]-magic_mat[i][s_i][s_j]);
            }  
        }
        if(!i)
        {
            min_count=count;
        }
        else if(min_count>count)
        {
            min_count=count;
        }
    }
    cout << min_count << endl;
    return 0;
}
