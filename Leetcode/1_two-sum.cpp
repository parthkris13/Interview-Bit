class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_set<int> s;
        int temp;
        for(int i=0; i<nums.size(); i++){
            temp = target - nums[i];
            if(s.find(temp) != s.end()){
                ans.push_back(i);
                break;
            }
            else s.insert(nums[i]);
        }
        for(int i =0; i<nums.size(); i++) if(nums[i] == temp){
            ans.push_back(i);
            break;
        } 
        return ans;
    }
};