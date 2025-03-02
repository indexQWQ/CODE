#include<iostream>
#include<string>
#include<unordered_map>
#include<cmath>
using namespace std;


class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> ss,tt;
        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            ss[s[i]]=i;
        }
        for(int i=0;i<t.size();i++)
        {
            tt[t[i]]=i;
        }
        for(char ch:s)
        {
            sum+=abs(ss[ch]-tt[ch]);
        }
        return sum;
    }
};