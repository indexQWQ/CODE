#include <iostream>
#include <functional>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int sum=0;
        for(int i=0;i<s.size();i+=2*k)
        {
            if(s.size()-i<k)
            {
                reverse(s.begin()+i,s.begin()+s.size());
                break;
            }
            if(s.size()-i>=k && s.size()-i<2*k)
            {
                reverse(s.begin()+i,s.begin()+i+k);
                break;
            }
            reverse(s.begin()+i,s.begin()+i+k);
        }
        return s;
    }
};