#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        if(numRows==1)return s;
        //result.resize(s.size());
        for(int i=0;i<numRows;i++){
            if(i==0 || i==numRows-1){
                int index=i;
                while(index<s.size()){
                    result.push_back(s[index]);
                    index+=2*(numRows-1);
                }
            }
            else{
                int index=i;
                int index2=i+2*(numRows-1)-i*2;
                while(index<s.size() || index2<s.size()){
                    if(index<s.size())
                        result.push_back(s[index]);
                    if(index2<s.size())
                        result.push_back(s[index2]);
                    index+=2*(numRows-1);
                    index2+=2*(numRows-1);
                }
            }
        }
        return result;
    }
};