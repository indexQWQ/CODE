#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        multimap<int, int, greater<int>> mm;
        for (int i = 0; i < (int)height.size(); i++) {
            mm.insert({height[i], i});
        }
        int max_area = 0;
        int left = mm.begin()->second;
        int right = left;
        for (auto it = mm.begin(); it != mm.end(); ++it) {
            int current_height = it->first;
            int current_index = it->second;
            left = min(left, current_index);
            right = max(right, current_index);
            int current_area = current_height * (right - left);
            if (current_area > max_area) {
                max_area = current_area;
            }
        }
        return max_area;
    }
};