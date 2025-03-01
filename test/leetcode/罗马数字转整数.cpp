#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int sum=0,len=s.size();
        for(int i=0;i<len;i++)
        {
            switch (s[i])
            {
            case 'I':
                if(i<len-1 && s[i+1]=='V')
                {
                    i++;sum+=4;
                }
                
                else if(i<len-1 && s[i+1]=='X')
                {
                    i++;sum+=9;
                }
                
                else
                sum+=1;
                break;
            case 'V':
                sum+=5;
                break;
            case 'X':
                if(i<len-1 && s[i+1]=='L')
                {
                    i++;sum+=40;
                }
                
                else if(i<len-1 && s[i+1]=='C')
                {
                    i++;sum+=90;
                }
                
                else
                sum+=10;
                break;
            case 'L':
                sum+=50;
                break;
            case 'C':
                if(i<len-1 && s[i+1]=='D')
                {
                    i++;sum+=400;
                }
                
                else if(i<len-1 && s[i+1]=='M')
                {
                    i++;sum+=900;
                }
                
                else
                sum+=100;
                break;
            case 'D':
                sum+=500;
                break;
            case 'M':
                sum+=1000;
                break;
            default:
                break;
            }
        }
        return sum;
    }
};