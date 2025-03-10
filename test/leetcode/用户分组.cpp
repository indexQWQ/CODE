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
        unordered_map<int,int> um;
        for(int i:groupSizes){
            um[i]++;
        }
        for(pair<int,int> i:um){
            vector<int> temp;
            int cont=0,index=0;
            for(int j=1;j<=i.second;j++,cont++,index++){
                while(groupSizes[index]!=i.first)index++;
                if(cont==i.first){
                    result.push_back(temp);
                    temp.clear();
                    cont=0;
                }
                temp.push_back(index);
                if(j==i.second)result.push_back(temp);
            }
        }
        return result;
    }
};
int main()
{

    return 0;
}