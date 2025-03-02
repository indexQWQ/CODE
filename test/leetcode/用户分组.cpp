#include<iostream>
#include<string>
#include<unordered_map>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> result;
        unordered_map<int,int> mm;
        for(int i:groupSizes)
            mm[i]++;
        for(auto i:mm)
        {
            for(int j=0;j<i.second/i.first;j+=)

        }
    }
};
int main()
{

    return 0;
}