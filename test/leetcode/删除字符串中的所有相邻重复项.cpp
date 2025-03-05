#include <iostream>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> str;
        for(int i = 0; i < (int)s.size(); i++) {
            if(!str.empty() && s[i] == str.top()) {
                str.pop();
                continue;
            }
            str.push(s[i]);
        }
        string result;
        while(!str.empty()) {
            result.push_back(str.top());
            str.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};

int main()
{
    string s="abbaca";
    cout<<Solution().removeDuplicates(s)<<endl;
    system("pause");
    return 0;
}