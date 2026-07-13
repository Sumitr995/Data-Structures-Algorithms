class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        // Left pointer starts from beginning
        int left = 0;

        // Right pointer starts from end
        int right = numbers.size() - 1;

        // Continue until pointers meet
        while (left < right) {

            // Calculate current sum
            int currSum = numbers[left] + numbers[right];

            // Found the answer
            if (currSum == target) {
                return {left + 1, right + 1}; // 1-based indexing
            }

            // Need a bigger sum
            else if (currSum < target) {
                left++;
            }

            // Need a smaller sum
            else {
                right--;
            }
        }

        // Problem guarantees one solution
        return {};
    }
};