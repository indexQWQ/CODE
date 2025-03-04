#include <iostream>
#include <string>
#include <vector>
using namespace std;

// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         if(s.size()==1)return false;
//         int slow=s.find(s[0]);
//         int fast=s.find(s[0],slow+1);
//         if(fast==-1)return false;
//         string str=s.substr(slow,fast);
//         for(int i=0;i<s.size();i+=fast)
//         {
//             string temp=s.substr(i,fast);
//             if(str.compare(temp)!=0)return false;
//         }
//         return true;
//     }
// };

//法二
// class Solution {
// public:
//     bool repeatedSubstringPattern(string s) {
//         if(s.size()==1)return false;
//         string str=s+s;
//         for(int i=1;i<str.size()-s.size();i++)
//         {
//             string temp=str.substr(i,s.size());
//             if(temp.compare(s)==0)
//                 return true;
//         }
//         return false;
//     }
// };

//方法三
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.size()==1)return false;
        vector<int> v;
        v.resize(s.size());
        int j=0;
        v[0]=0;
        for(int i=1;i<s.size();i++)
        {
            while(j>0 && s[j]!=s[i])j=v[j-1];
            if(s[j]==s[i])j++;
            v[i]=j;
        }
        if(v[s.size()-1]==0)return false;
        string str=s.substr(0,s.size()-v[s.size()-1]);
        for(int i=0;i<s.size();i+=str.size())
        {
            string temp=s.substr(i,str.size());
            if(str.compare(temp)!=0)return false;
        }
        return true;
    }
};
int main()
{

    return 0;
}