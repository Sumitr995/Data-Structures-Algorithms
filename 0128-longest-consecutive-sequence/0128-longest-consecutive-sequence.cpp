class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0; // returns 0 if nums = 0;
        sort(nums.begin(),nums.end()); // sorted nums
        int n = nums.size(); 
        int count = 0;
        int lastSmaller = INT_MIN;  // at start no last no. is present
        int largest = 1;

        for(int i=0; i<n; i++){ // outer loop
            if(nums[i] - 1 == lastSmaller){ // present - 1 = prev
                count++;        
                lastSmaller = nums[i]; 
            }else if(lastSmaller != nums[i]){ // resetting if prev != present
                count = 1;
                lastSmaller = nums[i];
            }
            largest = max(largest, count); // compare largest and count so that 
        }
        return largest;
    }
};