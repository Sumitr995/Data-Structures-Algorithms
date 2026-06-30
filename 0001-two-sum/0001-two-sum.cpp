class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;

        for (int k = 0; k < n; k++) { // outer loop 
            for (int j = k + 1; j < n; j++) { // inner loop
                if (nums[k] + nums[j] == target) {
                    ans.push_back(k);
                    ans.push_back(j);

                    return ans;
                }
            }
        }

        return ans;
    }
};