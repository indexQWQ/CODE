#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <stack>
#include <algorithm>
#include <cstdlib>
using namespace std;


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s; // 改为存储int类型，避免频繁字符串转换
        
        for (const string& token : tokens) { // 使用范围循环更简洁
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                // 确保栈中有足够操作数
                if (s.size() < 2) throw runtime_error("Invalid RPN expression");
                int b = s.top(); s.pop();
                int a = s.top(); s.pop();
                if (token == "+") a += b;
                else if (token == "-") a -= b;
                else if (token == "*") a *= b;
                else if (token == "/") a /= b; // 注意C++的整数除法特性
                
                s.push(a);
            } else {
                s.push(stoi(token)); // 直接转换数字压栈
            }
        }
        
        if (s.size() != 1) throw runtime_error("Invalid RPN expression");
        return s.top();
    }
};