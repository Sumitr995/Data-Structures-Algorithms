class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int>sum;
        int left = 0;
        int right = n - 1;
        while( left < right){
            int currSum = numbers[left] + numbers[right];
            if( currSum > target){
                right--;
            }else if(currSum < target){
                left++;
            }else{
                sum.push_back(left + 1);
                sum.push_back(right + 1);
                break;
            }
        }
        return sum;
    }
};