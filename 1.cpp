#include <vector>
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> s;
        vector <int> f;
        int n=(int)nums.size();
        int i;
        for(i=0;i<n;i++)
        {
            
            int x=target-nums[i];
            
            if(s.find(x)!=s.end())
            {
                f.push_back(s[x]);
                f.push_back(i);
                return f;
            }
            s.insert({nums[i],i});
            
        }

        return {};
    }
};